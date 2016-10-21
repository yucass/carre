#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10
int main()
{

int larg=0;
int lon=0;
int choixLarg=0;
int choixLon=0;

//Saisie des valeurs
printf("entrez une valeur longeur : \n");
scanf("%d",&choixLon);
printf("entrez une valeur largeur : \n");
scanf("%d",&choixLarg);

//Boucles
for(lon=0;lon<=choixLon;lon++){
        printf("0");
        for (larg=0;larg<=choixLarg;larg++){

    if(lon==1 || lon==choixLon || larg==1 || larg==choixLarg){

        printf("*");
 }
        else { printf("*");}

        }
printf("\n");


}

    return 0;
}
