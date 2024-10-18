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

typedef struct persone
{
    char nom[100];
    char tel[100];
}Persone;


Persone tab[100];


//taille du tableau
int taille_du_tableau(){
    
    int i=0;
    while(strcmp(tab[i].nom , FIN_TABLEAU )!=0)i++;
    return i;
    
   
}

//retourne l'index ou -1 si non present
int est_present(char *a_chercher){
    int i=0;
   
    if (strcmp(tab[0].nom , FIN_TABLEAU )==0)       return -1;
    
    while (strcmp(tab[i].nom , FIN_TABLEAU )!=0)   
    {
        if (strcmp(tab[i].nom, a_chercher) == 0) return i; 
        i++;
    }
    return -1;

}



//affiche
void affiche(){
    int i=0, size;
    size=taille_du_tableau();
    printf("*************************\n");
    printf("*************************\n",size);

    if (strcmp(tab[0].nom , FIN_TABLEAU )==0)        printf("tableau vide\n");
    
    for (int i = 0; i < size; i++)
    {
        printf("%s a pour telephone : %s\n",tab[i].nom,tab[i].tel);
    }
}


//ajout d'un element
void ajout(){
    //variable
    char temp[100];
    int taille_tableau = taille_du_tableau();
    struct persone *nouveau;
  
    //entrer du nom
    printf("entrer le nom : ");
    scanf("%s",&temp);
   
    if (est_present(temp)>=0) {
        printf("erreur il est deja dans la base\n");
        return;
    }
 
    //nouveau=malloc(sizeof(Persone));
    strcpy(tab[taille_tableau].nom, temp);
    //tab[taille_tableau+1]=*nouveau;
    strcpy(tab[taille_tableau+1].nom,FIN_TABLEAU);
    
    //entrer du tel
    printf("entrer le numero de tel : ");
    scanf("%s",&temp);
    strcpy(tab[taille_tableau].tel, temp);
    
    
    
            
}

//supression d'un element
void supprime(){
    //variable
    char temp[99];
    int taille_tableau = taille_du_tableau();
    int position;
    
    //entrer du nom
    printf("entrer le nom : ");
    scanf("%s",temp);
    position=est_present(temp);
    if (position==-1) {
        printf("erreur il n'est deja dans la base\n");
        return;
    }
    //supression
    for (int i=position;i<taille_tableau;i++){
        strcpy(tab[i].nom,tab[i+1].nom);
        strcpy(tab[i].tel,tab[i+1].tel);
    }

    printf("supression effectuer\n");

}



void recherche(char *a_chercher){
    int retour= est_present(a_chercher);
    if(retour==-1) printf("il n'est pas dans la liste\n");
    else printf("%s a pour telephone : %s\n",tab[retour].nom,tab[retour].tel);
}

//debut du programe
int main(void){
    //variable
    char choix_menu='0';
    char a[100]; //personne a chercher
   
  
    
    strcpy(tab[0].nom,"arnaud");
    strcpy(tab[0].tel,"06 00 00 00 00");
    
    strcpy(tab[1].nom,FIN_TABLEAU);
    
    printf("%d\n",taille_du_tableau());

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
    return 0; 
    
}