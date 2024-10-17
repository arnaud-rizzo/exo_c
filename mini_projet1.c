//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <regex.h>
//#include <time.h>

#define FIN_TABLEAU "aaa fin du tableau aaa"                  
#define FORMA_TEL "^0[1-9]([-. ]?[0-9]{2}){4}$" //format attendu pour le telephone

//les tableau en global
char* tab_nom[100]; 
char* tab_tel[100];

//taille du tableau
int taille_de(char** tab){
    int i=0;
    while(tab[i] != FIN_TABLEAU )i++;
    return i;
    
   
}


//ajout d'un element
int ajout(){
    //variable
    char* nom_a_entrer[0];
    
    
    printf("entrer le nom : ");
    scanf(" %s",nom_a_entrer);
    
}



//debut du programe
int main(void){
    //variable
    

    //initialisation tableau
    tab_nom[0]=FIN_TABLEAU;
    

    
    /*
    int regtest;
    char *test = "06 20 17 02 24";
    
    regex_t regex;
    regtest = regcomp(&regex, FORMA_TEL, REG_EXTENDED);
    regtest = regexec(&regex, test, 0, NULL, 0);
    */

    printf("reti vaut : %s",taille_de(tab_nom));




    return 0; 
    
}