//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>

#define ST 5



//affiche les element d'un tableau pour controle
void affichage_tableau (int *tableau,int size){

    printf("le tableau contient :");
    for (int i=0;i<size;i++){
        printf(" %d ",tableau[i]);
    }
    printf("\n");

}


//debut du programe
int main(void){
    //variable
    int tableau1[ST] ={1,2,3,4,5};
   
   
    //affichage avant
    printf("tableau 1 ");
    affichage_tableau(tableau1,ST);
   
    //double les valeurs
    for (int i =0;i < (sizeof(tableau1) );i++ ) {
        *(tableau1+i) *=2;
    }
    
    

    //affichage apres
    printf("tableau 1 ");
    affichage_tableau(tableau1,ST);
   
    
    
    return 0; //fini le programe et retourne que tous c'est bien passer
    
}