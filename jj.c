#include <stdio.h>
#include <math.h>
int main(void)
 {

    int x, resultat;

    printf("entrer la valeur de x\n");
    scanf("%d", &x);

    resultat= 3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;

printf("le resultat du polynom est %d", resultat);
    return 0;
 }