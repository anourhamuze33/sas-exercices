#include <stdio.h>

int nchif (int nbr) {
    int r=0;
    do{
        nbr=nbr/10;
        r++;
    }while(nbr !=0);
    return r;
}


int main() {
    int a,b,c,d,e,v;
    v= nchif(a)+nchif(b)+nchif(c)+nchif(d)+nchif(e);
    printf("entrez l'ISBN : ");
    scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);


    do{
    printf("GS1 cannot be %d entrez le correct ISBN : ",a);
    printf("entrez l'ISBN : ");
    scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);

    }while( a!=978 && a!=979);

 do{
    printf("entrez l'ISBN correct : ");
    scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);

    }while( v!=13);

    printf("Préfixe GS1 :%d\n",a);
    printf("Identifiant de groupe :%d\n",b);
    printf("Code de l'éditeur :%d\n",c);
    printf("Numéro d'article :%d\n",d);
    printf("Chiffre de contrôle :%d",e);
    return 0;
}