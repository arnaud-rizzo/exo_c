//librairi
#include <stdio.h>
#include <stdlib.h>


//debut du programe
int main(){
    float cote; //taille du cote

    //demande de la taille du cote
    printf("quelle est la taille du cote du carre? :");
    scanf("%f",&cote); 

    printf("le perimetre vaut :%f\n",cote*4);//affichage du perimetre
    printf("la surface vaut :%f\n",cote*cote);//affichage de la surface
    
    
    return 0;//fini le programe et retourne que tous c'est bien passer
    
    
}