//librairi
#include <stdio.h>
#include <stdlib.h>


//debut du programe
int main(void){
    
    //variable
    int age=0;
    float taille=0.0;
    char initial1,initial2;
    
    //saisi age
    printf("quel est votre age ");
    scanf("%d",&age);

    //saisi taille
    printf("quel est votre taille");
    scanf("%f",&taille); 


    //saisi initial
    printf("entrer vos initial : ");
    scanf(" %c %c",&initial1,&initial2);
    fflush(stdin);
    
    //affichage des donnee
    printf("vous avez %d ans ,mesurer %f m et vos initial sont : %c. %c.\n",age,taille,initial1,initial2);
    


    return 0;//fini le programe et retourne que tous c'est bien passer
    
    
}