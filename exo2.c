//librairi
#include <stdio.h>
#include <stdlib.h>


//debut du programe
int main(){
    // declaration variable
    int testint =0;
    long testlong =1;
    short testshort =2;
    float testfloat=1.1;
    double testdouble=2.1;
    char testchar ='c';


    //affichage titre
    printf("TP 2, \"p2_memoire_et_variable\" \n");
    
    //affichage du contenu des variable
    printf("testint vaut : %d\n",testint);
    printf("testshort vaut : %d\n",testshort);
    printf("testlong vaut : %ld\n",testlong);
    printf("testfloat vaut : %f\n",testfloat);
    printf("testdouble vaut : %f\n",testdouble);
    printf("testchar vaut : %c\n",testchar);
    
    //affichage du contenu des variable et de leur taille en memoire
    printf("testint vaut : %d et fait %d octet\n",testint,sizeof(testint));
    printf("testshort vaut : %d et fait %d octet\n",testshort,sizeof(testshort));
    printf("testlong vaut : %ld et fait %d octet\n",testlong,sizeof(testlong));
    printf("testfloat vaut : %f et fait %d octet\n",testfloat,sizeof(testfloat));
    printf("testdouble vaut : %f et fait %d octet\n",testdouble,sizeof(testdouble));
    printf("testchar vaut : %c et fait %d octet\n",testchar,sizeof(testchar));
   

    return 0;//fini le programe et retourne tous c'est bien passer
    
    
}