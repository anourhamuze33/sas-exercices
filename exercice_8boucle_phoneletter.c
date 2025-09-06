#include <stdio.h>
#include <ctype.h>

char lettee(char c) {
        if (c == 'Z') { printf("this letter Z doesn't have a number");}
        if (c == 'A' || c == 'B' || c == 'C') return '2';
        if (c == 'D' || c == 'E' || c == 'F') return '3';
        if (c == 'G' || c == 'H' || c == 'I') return '4';
        if (c == 'J' || c == 'K' || c == 'L') return '5';
        if (c == 'M' || c == 'N' || c == 'O') return '6';
        if (c == 'P' || c == 'R' || c == 'S') return '7';
        if (c == 'T' || c == 'U' || c == 'V') return '8';
        if (c == 'W' || c == 'X' || c == 'Y') return '9';
    return c;
}

int main() {
    char inachange[200];

    printf("Entrez un numéro de téléphone : ");
    fgets(inachange, sizeof(inachange), stdin);

    for (int i=0; i<=200 ; i++) {
    if(inachange[i] != '\0'){
        inachange[i] = lettee(inachange[i]);
        }
    }
    printf("Numéro traduit : %s\n", inachange);

    return 0;
}