//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//debut du programe
int main(void){
    
    int nombre_choisi=0;

    printf("choisir un entier : ");
    scanf("%d",&nombre_choisi);

    for (int i = 0; i <= nombre_choisi; i++)
    {
        printf("la table de %d est :\n");
        for (int j = 0; j < 10; j++){
            printf("%d * %d = %d\n",j,i,j*i);
        }          
        
        
    }
    
    

    return 0;//fini le programe et retourne que tous c'est bien passer
    
    
}