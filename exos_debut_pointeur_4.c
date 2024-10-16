//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>

int somme(int nb1, int nb2){
    return nb1+nb2;
}


//debut du programe
int main(void){
   //variable
    int (*adresse_fonction)() =somme;

    printf("2+4 font :%d\n",(*adresse_fonction)(2,4));

    return 0; //fini le programe et retourne que tous c'est bien passer
    
    
}