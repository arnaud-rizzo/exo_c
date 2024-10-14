//librairi
#include <stdio.h>
#include <stdlib.h>


//debut du programe
int main(){
    float hauteur; //taille de la hauteur
    float largeur; //taille de la largeur
    

    //demande de la taille de la hauteur
    printf("quelle est la taille de la hauteur du rectangle? :");
    scanf("%f",&hauteur); 
    
    //demande de la taille de la largeur
    printf("quelle est la taille de la largeur du rectangle? :");
    scanf("%f",&largeur); 

    printf("le perimetre du rectangle vaut :%f\n",hauteur*2+largeur*2);//affichage du perimetre
    printf("l'aire du rectangle vaut :%f\n",hauteur*largeur);//affichage de la surface
    
    
    return 0;//fini le programe et retourne tous c'est bien passer
    
    
}