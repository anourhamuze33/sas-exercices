#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int di[10] = {false};
    int d,b,r;
    long n;
    
    printf("Entrez un nombre: "); 
    scanf("%ld", &n);
    
while (n > 0) { 
        d = n % 10;
        n /= 10;
        di[d]++;
    }

printf("Chiffres repetes sont : ");
    for (int i = 0; i < 10; i++) {
         if (di[i] > 1) {
            printf("%d ", i);
            r=b;
        }
    }

    if (r!=b)
        printf("Aucun");

    return 0;
}