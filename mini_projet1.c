//librairi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <regex.h>
//#include <time.h>

#define FIN_TABLEAU "aaa fin du tableau aaa"                  
//#define FORMA_TEL "^0[1-9]([-. ]?[0-9]{2}){4}$" //format attendu pour le telephone

//les tableau en global
char* tab_nom[100]; 
char* tab_tel[100];

//taille du tableau
int taille_de(char** tab){
    int i=0;
    while(tab[i] != FIN_TABLEAU )i++;
    return i;
    
   
}

//retourne l'index ou -1 si non present
int est_present(char* a_chercher){
    int i=0;
    
    if (tab_nom[0]==FIN_TABLEAU)       return -1;
    
    while (tab_nom[i]!=FIN_TABLEAU)   
    {
       
        if (strcmp(tab_nom[i], a_chercher) == 0) return i; 
        i++;
       
    }
    return -1;

}



//affiche
void affiche(){
    int i=0;
    printf("*************************\n");
    printf("*************************\n");

    if (tab_nom[0]==FIN_TABLEAU)        printf("tableau vide\n");
    
    while (tab_nom[i]!=FIN_TABLEAU)     
    {
        printf("%s a pour telephone : %s\n",tab_nom[i],tab_tel[i]);
        i++;
    }
}


//ajout d'un element
void ajout(){
    //variable
    char temp[99];
    int taille_tableau = taille_de(tab_nom);
    
    //entrer du nom
    printf("entrer le nom : ");
    scanf("%s",temp);
   
    if (est_present(temp)>=0) {
        printf("erreur il est deja dans la base\n");
        return;
    }
 
    tab_nom[taille_tableau]=malloc(strlen(temp) + 1);
    strcpy(tab_nom[taille_tableau], temp);
    tab_nom[taille_tableau+1]=FIN_TABLEAU;
    
    //entrer du tel
    printf("entrer le numero de tel : ");
    scanf("%s",temp);
    tab_tel[taille_tableau]=malloc(strlen(temp) + 1);
    strcpy(tab_tel[taille_tableau], temp);
    tab_tel[taille_tableau+1]=FIN_TABLEAU;
                
                /*      echec mission
                while (true)
                {
                
                scanf("%s",tel);
                printf(tel);
            
            
                int regtest;
                regex_t regex;
                regtest = regcomp(&regex, FORMA_TEL, REG_EXTENDED);
                regtest = regexec(&regex, tel, 0, NULL, 0);
                if (regtest=0) break;
                printf("\nereur format de tel 0X XX XX XX XX\nentrer le numero de tel : ");

                }
                tab_tel[taille_tableau]=tel;
                tab_tel[taille_tableau+1]=FIN_TABLEAU;
                */
}

//supression d'un element
void supprime(){
    //variable
    char temp[99];
    int taille_tableau = taille_de(tab_nom);
    int position;
    
    //entrer du nom
    printf("entrer le nom : ");
    scanf("%s",temp);
    position=est_present(temp);
    if (position==-1) {
        printf("erreur il n'est deja dans la base\n");
        return;
    }
    for (int i=position;i<taille_tableau;i++){
        tab_nom[i]=tab_nom[i+1];
        tab_tel[i]=tab_tel[i+1];
    }

    printf("supression effectuer\n");

}



void recherche(char* a_chercher){
    int retour= est_present(a_chercher);
    if(retour==-1) printf("il n'est pas dans la liste\n");
    else printf("%s a pour telephone : %s\n",tab_nom[retour],tab_tel[retour]);
}

//debut du programe
int main(void){
    //variable
    char choix_menu='0';
    char a[100]; //personne a chercher
   
    //scanf("%s",test);
    //printf("%s\n", test);
    //printf("reti vaut : %d",taille_de(tab_nom));
    //initialisation tableau
    
    tab_nom[0]="arnaud";
    tab_tel[0]="06 00 00 00 00";
    
    
    tab_nom[1]=FIN_TABLEAU;
    tab_tel[1]=FIN_TABLEAU;
    


    //menu
    while (true)
    {
        choix_menu='0';
        //menu
        printf("*************************\n");
        printf("que voulez vous faire?\n");
        printf("1 - afficher le tableau\n");
        printf("2 - rechercher une entre\n");
        printf("3 - ajouter une entre\n");
        printf("4 - suprimer une entre\n");
        printf("5 - quitter\n");
        scanf(" %c",&choix_menu);

        if (choix_menu=='5')break;
        
        switch (choix_menu)
        {
            //affiche    
            case '1':
                affiche();
                break;
            //recherche
            case '2':
                printf("qui voulez vous trouver:\n");
                scanf("%s",a);
                recherche(a);
                break;
            //ajoute
            case '3':
                ajout();
                break;
            //erreur
            case '4':
                supprime();
                break;
            default:
                printf("erreur retentere votre chance\n\n");
                break;
        }
    }
    
    



    
    /*
    int regtest;
    char *test = "06 20 17 02 24";
    
    regex_t regex;
    regtest = regcomp(&regex, FORMA_TEL, REG_EXTENDED);
    regtest = regexec(&regex, test, 0, NULL, 0);
    */

    




    return 0; 
    
}