#include <stdio.h>
#include <ctype.h>

int valdulett(char c) {
    c = toupper(c); 
    switch(c) {
        case 'A': 
        case 'E':
        case 'I': 
        case 'L': 
        case 'N': 
        case 'O':
        case 'R': 
        case 'S': 
        case 'T': 
        case 'U':
            return 1;
        case 'D': 
        case 'G':
            return 2;
        case 'B': 
        case 'C': 
        case 'M': 
        case 'P':
            return 3;
        case 'F': 
        case 'H': 
        case 'V': 
        case 'W': 
        case 'Y':
          return 4;
        case 'K':
            return 5;
        case 'J': 
        case 'X':
            return 8;
        case 'Q': 
        case 'Z':
            return 10;
        default:
            return 0;
    }
}

int main() {
    char word[200];
    int val = 0;

    printf("Entrez un mot : ");
    fgets(word, sizeof(word), stdin);

    for (int i = 0; i<=200; i++) {
       if(word[i] != '\0'){
        val += valdulett(word[i]);
       }
      else{
      break;
      }
    }

    printf("Valeur Scrabble : %d\n", val);

    return 0;
}