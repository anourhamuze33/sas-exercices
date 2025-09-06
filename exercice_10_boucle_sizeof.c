
#include <stdio.h>

int main() {
    printf("Taille de int : %d octets\n", sizeof(int));
    printf("Taille de short : %d octets\n", sizeof(short));
    printf("Taille de long : %d octets\n", sizeof(long));
    printf("Taille de float : %d octets\n", sizeof(float));
    printf("Taille de double : %d octets\n", sizeof(double));
    printf("Taille de long double : %d octets\n", sizeof(long double));

    return 0;
}