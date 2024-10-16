//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>

#define ST 5

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
    int tableau[ST] ={1,2,3,5,6};
   
    affichage_tableau(tableau,ST);
    printf("ont change un element par 99\n");
    
    tableau[2] = 99;
    
    affichage_tableau(tableau,ST);  
    return 0; //fini le programe et retourne que tous c'est bien passer
    
}