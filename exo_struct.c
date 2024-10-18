//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>

typedef struct persone
{
    char nom[100];
    int age;
    float taille;
}Persone;



//debut du programe
int main(void){
    //variable
    Persone alain_de_loin;

    printf("votre nom : ");
    scanf("%s",&alain_de_loin.nom);
    printf("votre age : ");
    scanf("%d",&alain_de_loin.age);
    printf("votre taille : ");
    scanf("%f",&alain_de_loin.taille);
    

    printf("%s a %d ans et mesure %f m\n",alain_de_loin.nom,alain_de_loin.age,alain_de_loin.taille);

    return 0; //fini le programe et retourne que tous c'est bien passer
    
}