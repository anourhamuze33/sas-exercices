#include <stdio.h>
int main() {
    int h,min,k,h1,min1,h2,min2,r;
    int numbers [] = {480,583,679,767,840,945,1140,1305};
    int t3 [] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    printf("entrer l'heure du depart (h) (min)\n");
    scanf("%dh%dmin",&h,&min);
    k=h*60+min;
 for(int i=7; i>=0;i--){
    
  if(numbers[i]<=k){
     
      h2=numbers[i]/60;
      min2=numbers[i]%60;
      printf("L'heure de départ la plus proche est %dh %dmin", h2, min2);
      r = i;
      break;
  }
}
      h1=t3[r]/60;
      min1=t3[r]%60;
      printf(", arrivant à %dh %dmin", h1, min1);

    return 0;
}