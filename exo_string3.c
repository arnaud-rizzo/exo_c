//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>





//debut du programe
int main(void){
    //variable
    char chaine[100];
    char chaine2[100];
    int longueur =0,longueur2=0;

    //saisi des chaine
    printf("entrer une chaine : ");
    scanf("%s",chaine);
    printf("entrer une deuxieme chaine : ");
    scanf("%s",chaine2);


    //calcul de longeur de 1
    while (chaine[longueur]!='\0')  longueur++;
    while (chaine2[longueur2]!='\0')  longueur2++;
   
    

    //comparaison
    for(int i=0;i<=longueur;i++)   if(chaine[i]!=chaine2[i]){
        printf("les chaine sont differente\n");
        return 0;
    }
    printf("les chaine sont identique\n");
    return 0; 
    
}