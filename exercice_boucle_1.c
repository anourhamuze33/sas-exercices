#include <stdio.h>

int nchif (int nbr) {
    int r=0;
    if(nbr==0){
        r=1;
    }
    while(nbr !=0){
        
        nbr=nbr/10;
        r++;
    }
    return r;
}


int main() {
    int a,b,c,d,e,v;
    v= nchif(a)+nchif(b)+nchif(c)+nchif(d)+nchif(e);
    printf("entrez l'ISBN : ");
    scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);


    while( (a!=978 && a!=979)||v!=13){
        if(v!=13){
            printf("le nombre de chifre doit etre 13");
        }
        else if(v!=13&& (a!=978 && a!=979)){
            printf("le nombre de chifre doit etre 13\n");
            printf("GS1 cannot be %d entrez le correct ISBN : ",a);
        }
        
     else if(a!=978 && a!=979){
            printf("GS1 cannot be %d entrez le correct ISBN : ",a);
        }
    printf("entrez l'ISBN : ");
    scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);

    }



    printf("Préfixe GS1 :%d\n",a);
    printf("Identifiant de groupe :%d\n",b);
    printf("Code de l'éditeur :%d\n",c);
    printf("Numéro d'article :%d\n",d);
    printf("Chiffre de contrôle :%d",e);
    return 0;
}