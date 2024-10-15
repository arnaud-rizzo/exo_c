//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

//debut du programe
int main(void){
    //variable
    int nombre_mystere = 0, nombre_utilisateur = 0,numero_tentative=1;
    const int VALEUR_MIN = 1, VALEUR_MAX = 100, nombre_de_tentative=3;
    bool victiore =false;
    char choix='n';
    

    while (true)//pour rejouer
    {
        
    // generation d'un nombre aleatoire
    srand(time(NULL));
    nombre_mystere = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;

    

    printf("Devinez quel est mon nombre mystere : %d. Indice: c'est un nombre entre %d et %d \n",nombre_mystere, VALEUR_MIN, VALEUR_MAX);
    
   
    for (int numero_tentative = 1; numero_tentative <= nombre_de_tentative; numero_tentative++ ) //l'incrementation dans la boucle
    {
        //demande du nombre
        printf("\n%d tentative \nvotre choix : \n",numero_tentative); 
        scanf("%d",&nombre_utilisateur);

        //test du nombre
        if(nombre_utilisateur==nombre_mystere){
            printf("bravo vous avez reussi a la %d tentative\n",numero_tentative);
            victiore=true;
            break;
        }else if (nombre_utilisateur<nombre_mystere)    printf("cest plus grand\n");
        else                                            printf("cest plus petit\n");
     
        
    }
    
    //si perdu
    if(!victiore)    printf("desole vous avez perdu");
    

    //test pour rejouer
    printf("\nvoulez vous rejouer?(o/n)");
    scanf(" %c",&choix);
    if (choix!='o')break;
    
    //reinitialisation
    victiore=false;
    numero_tentative=1;
  
    }
    return 0;//fini le programe et retourne que tous c'est bien passer
    
    
}