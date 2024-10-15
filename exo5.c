//librairi
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//debut du programe
int main(void){
    //variable
    int nombre1=0, nombre2=0; 
    int resulta=0.0;
    char operation='a';
    int erreur = 0;

    //saisi de l'operation
    printf("Indiquez l'operation mathematique que je doit resoudre (sans espace)\n");
    printf("-sous la forme [nombre1 opérateur nombre2] par exemple (2+3)\n");
    printf("-operateurs possibles [+, -, *, / , %%\n");
    
    scanf ("%d %c %d",&nombre1,&operation,&nombre2);

    //calcul
    switch (operation){
        //addition
        case '+' : resulta = nombre1+nombre2; break;
        //soustraction
        case '-' : resulta = nombre1-nombre2; break;
        //multiplication
        case '*' : resulta = nombre1*nombre2; break;
        //division
        case '/' : 
            if (nombre2==0){
                erreur=1;
                printf("erreur diviseur nul\n");
            }
            else resulta = nombre1/nombre2;
        break;
        //modulo
        case '%' : 
            if (nombre2==0){ 
                erreur=1;
                printf("erreur diviseur nul\n");
            }
            else resulta = nombre1%nombre2;
        break;

        //mauvais operateur
        default: {
            erreur = 1;
            printf("erreur pas un operateur %c\n",operation);
        }
        
    }

    

    //affichage du resultat si l'operateur etait valide
    if (erreur!=1)    
        printf("le resultat : %d %c %d = %d\n",nombre1,operation,nombre2,resulta);
    
    return 0;//fini le programe et retourne que tous c'est bien passer
    
    
}