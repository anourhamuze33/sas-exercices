#include <stdio.h>
int main(void)
 {


float pret, interet, monsiel,p1,p2,p3, c;

printf("entrer le montant du pret: ");
scanf("%f", &pret);
printf("entrer le montant monsiel: ");
scanf("%f", &monsiel);
printf("entrer l'interet: ");
scanf("%f", &interet);

c = interet / 100;
p1 = c*(1.0f/12.0f)*pret+pret-monsiel;
p2 = c*(1.0f/12.0f)*p1+p1-monsiel;
p3 = c*(1.0f/12.0f)*p2+p2-monsiel;


printf("Solde restant après le premier paiement : %.2f\n", p1);
printf("Solde restant après le deuxième paiement : %.2f\n", p2);
printf("Solde restant après le troisième paiement : %.2f", p3);

    return 0;
 }