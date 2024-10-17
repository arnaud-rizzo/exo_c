//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>





//debut du programe
int main(void){
    //variable
    char chaine[100];
    char chainetemp[100];
    int longueur =0;

    //saisi de la chaine
    printf("entrer une chaine : ");
    scanf("%s",chaine);

    //calcul de longeur
    while (chaine[longueur]!='\0')  longueur++;

    //inversion
    for(int i=0;i<longueur-1;i++)   chainetemp[i]=chaine[longueur-i-1];
    
    //affichage de la longeur
    printf("%s\n",chainetemp);

    return 0; //fini le programe et retourne que tous c'est bien passer
    
}