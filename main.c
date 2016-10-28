#include <stdio.h>
#include <stdlib.h>

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

//boucle de 0 en haut
        for (larg=1;larg<=choixLarg+2;larg++){
                printf("0");}
        printf("\n");


    for(lon=1;lon<=choixLon;lon++){
//boucle de 0 àgauche
        for(lon=1;lon<=choixLon;lon++){ printf("0");

        for (larg=1;larg<=choixLarg;larg++){printf("*");
        }
//boucle de 0 àdroite
        if(larg==choixLarg){printf("0");}
        else{printf("0");}printf("\n");
        }
}
//boucle de 0 en bas
        for (larg=1;larg<=choixLarg+2;larg++){
                printf("0");}
        printf("\n");

    return 0;
}



