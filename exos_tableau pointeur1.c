//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>

#define ST 5

//switch deux tableau
//retourne 0 si tous se passe bien
int table_exchange(int *tableau1, int *tableau2){
    int temp=0;
    //verification de la taille egal
    if (sizeof(tableau1)!=sizeof(tableau2)) return 1;
    
    for (int i =0;i < (sizeof(tableau1) );i++ ) {
        temp = *(tableau1+i);
        *(tableau1+i) = *(tableau2+i);
        *(tableau2+i)=temp;
    }
    return 0;
        

}

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
    int tableau2[ST] ={6,7,8,9,10};
   
    //affichage avant
    printf("tableau 1 ");
    affichage_tableau(tableau1,ST);
    printf("tableau 2 ");
    affichage_tableau(tableau2,ST);
    
    //echange
    table_exchange(tableau1,tableau2);

    //affichage apres
    printf("tableau 1 ");
    affichage_tableau(tableau1,ST);
    printf("tableau 2 ");
    affichage_tableau(tableau2,ST);
    
    
    return 0; //fini le programe et retourne que tous c'est bien passer
    
}