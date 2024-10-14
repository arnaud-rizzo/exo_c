//librairi
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//debut du programe
int main(){
    float rayon; //taille du rayon
    float hauteur; //hauteur du cylindre/cone

    //demande de la taille du rayon
    printf("quelle est la taille du rayon cercle? :");
    scanf("%f",&rayon); 

    //afficher les carracteristique du cercle
    printf("le diametre du cercle fait :%f\n",rayon*2);//affichage du perimetre
    printf("la circonference du cercle fait :%f\n",M_PI*rayon*2);//affichage de la circonference
    printf("la surface du cercle vaut :%f\n",M_PI*rayon*rayon);//affichage de la surface
    
    //demande de la hauteur 
    printf("quelle est hauteur? :");
    scanf("%f",&hauteur);

    //afficher les carracteristique des volume
    printf("le volume du cylirndre est de : %f\n",M_PI*rayon*rayon*hauteur);
    printf("le volume du cone est de : %f\n",M_PI*rayon*rayon*hauteur/3);
    
    return 0;//fini le programe et retourne que tous c'est bien passer
    
    
}