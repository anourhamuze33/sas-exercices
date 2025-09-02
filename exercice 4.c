#include <stdio.h>
int main(void)
 {
     float mont,mt_ajoutee;
printf("entrer le montant en dollar et en cint: ");
scanf("%f", &mont);
mt_ajoutee = 0.05*mont + mont;
printf("Avec taxe ajoutée: %.2f $", mt_ajoutee);
    return 0;
 }