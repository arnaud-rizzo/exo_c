//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int nombre1 ,nombre2;

void inversion(){
    int inter;
    inter=nombre1;
    nombre1=nombre2;
    nombre2=inter;
}

void affichage(void){
    printf("nombre1 = %d\n nombre2 = %d\n",nombre1,nombre2);
}
//debut du programe
int main(void){
   
    nombre1 =1;nombre2=3;
    affichage();

    inversion(nombre1,nombre2);

    affichage();

    return 0; //fini le programe et retourne que tous c'est bien passer
    
    
}