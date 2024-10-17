//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>





//debut du programe
int main(void){
    //variable
    char chaine[100];
    int longueur =0;

    //saisi de la chaine
    printf("entrer une chaine : ");
    scanf("%s",chaine);

    //calcul de longeur
    while (chaine[longueur]!='\0')  longueur++;
    
    //affichage de la longeur
    printf("%d\n",longueur);

    return 0; //fini le programe et retourne que tous c'est bien passer
    
}