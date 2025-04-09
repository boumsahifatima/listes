#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
typedef struct element
{
 int val;
 struct element *suivant;
} element;
// ajouter au debut
element* ajouterDebut( element* liste, int valeur){
 element* nouveau = malloc(sizeof(element));
 nouveau ->val = valeur;
 nouveau ->suivant = liste;
 return nouveau ;
 }
 //ajouter a la fin de la liste 
 element* ajouterFin( element* liste, int valeur){
 element* nouveau = malloc(sizeof(element));
 nouveau->val = valeur;
 nouveau->suivant = NULL;
 if(liste == NULL)
 {
 return nouveau;
 }
 else {
 element* temp=liste;
 while(temp->suivant != NULL)
 {
 temp = temp->suivant;
 }
 temp->suivant = nouveau;
 return liste;
 } }
 //affichage
void afficherListe( element* liste){
 element *tmp = liste;
 while(tmp != NULL)
{
 printf("%d ", tmp->val);
 tmp = tmp->suivant;
 } }
int main(){
 element* liste=NULL;
 int i, valeur;
 // remplir la liste 
 for (i=0;i<5;i++){
 printf(" entrer une valeur ");
 scanf("%d",&valeur);
 liste= ajouterDebut(liste, valeur);
}
printf(" Affichage des donnees ajoutees au debutde la liste \n");
afficherListe(liste);
printf("\n");
for (i=0;i<5;i++){
 printf(" entrer une valeur ");
 scanf("%d",&valeur);
 liste= ajouterFin(liste, valeur);
}
printf(" Affichage des donnees ajoutees au debut et en fin de la liste\n");
afficherListe(liste);
getch();
return 0; }
