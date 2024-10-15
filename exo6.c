//librairi
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//debut du programe
int main(void){
    
    
    srand(time(NULL));


    //variable
    int sh = 0, so=0; //score humain = sh, score ordinateur = so
    int ch =0,co =0; //choix humain et ordi
    int plopi;
    
    while (sh<3 && so<3){

        //saisi du choix humain
        while (true){
            printf("que voulez vous jouer(1-pierre, 2-papier, 3-ciseaux)");
            scanf("%d",&ch);
           
            if(ch==1 || ch==2 ||ch==3) break;
            printf("erreur de saisi\n");
        }
            
            // generation d'un nombre aleatoire
            co = (rand() % 3) + 1;

            //affichage des choix
            printf("le joueur joue %d et l'ordi %d\n",ch,co);

            //comparaison matche null

            if(ch==co){
                printf("match null\n");
                
            }
            //comparaison ordi gagnant
            else if(
                ch==1&&co==2 || //pi pa
                ch==2&&co==3 || //pa c
                ch==3&&co==1   //c pi
            ){
                printf("l'ordi gagne la manche\n\n");
                so++;
            }else {
                printf("vous gagnee la manche\n\n");
                sh++;
            }
            
            printf("score  humain %d - ordi %d \n",sh,so);
            break;
  
    }

    if (sh==3)  printf("vous avez gagner");
    else        printf("vous avez perdu");


    return 0;//fini le programe et retourne que tous c'est bien passer
    
    
}