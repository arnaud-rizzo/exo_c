//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>


//debut du programe
int main(void){
   //variable
   int nombre;
   int *adress_du_nombre;
   int **adressocepion;
    nombre =4;
    printf("le nombre vaut : %d\n",nombre);

    adress_du_nombre = &nombre;

    
    adressocepion= &adress_du_nombre;

   // **adressocepion = 2;

   printf("le nombre vaut : %d\n",nombre);

    return 0; //fini le programe et retourne que tous c'est bien passer
    
    
}