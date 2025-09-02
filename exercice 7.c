#include <stdio.h>
int main(void)
 {

int montant, bill, bill2, bill3, bill4;
printf("entrer le montant en $\n");
scanf("%d", &montant);
bill = montant/20;
bill2 = (montant%20)/10;
bill3 = ((montant%20)%10)/5;
bill4 = (((montant%20)%10)%5);


printf("Billets de 20$ : %d\n", bill);
printf("Billets de 10$ : %d\n", bill2);
printf("Billets de 5$ : %d\n", bill3);
printf("Billets de 1$ : %d", bill4);



    return 0;
 }


  