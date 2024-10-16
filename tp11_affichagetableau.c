//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>


//debut du programe
int main(void){
    //variable
    int tableau[] ={1,2,3,4,5};
   
    printf("tableau a l'endroit :");
    for (int i=0;i<5;i++){
        printf(" %d ",tableau[i]);
    }
    
    printf("\ntableau a l'envers :");
    for (int i=4;i>=0;i--){
        printf(" %d ",tableau[i]);
    }

    printf("\n");

       return 0; //fini le programe et retourne que tous c'est bien passer
    
}