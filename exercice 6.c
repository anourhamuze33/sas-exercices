#include <stdio.h>
#include <math.h>
int main(void)
 {

    int x, resultat;

    printf("entrer la valeur de x\n");
    scanf("%d", &x);

    resultat= ((((3*x+2)(x-5))*(x-1))(x+7))(x-6);

printf("le resultat du polynom est %d", resultat);
    return 0;
 }