#include <stdio.h>
int main(){
   int n1, n2, D, D1,i,r,j = 0,f,v,s;
   int gcd;
   int numaSize= 0;
   int numa[100];
   int numbSize= 0;
   int numb[100];
   int diviseurSize= 0;
   int diviseur[100];
   printf("enter nbr 1 et nbr 2 \n");
   scanf("%d %d", &n1, &n2);
   
    for(int i=1; i<=n1;i++){
        D = n1%i;
        if(D==0){
            numa[numaSize] = i;
            numaSize++;
        }
    }
    for(int i=0; i<numaSize;i++){
        printf("%d", numa[i]);
    }
    
    
    printf("\n");
   
   
   
    for(int s=1; s<=n2;s++){
      
   D1 = n2%s;
    if(D1==0){
    numb[numbSize] = s;
    numbSize++;
     }
    }
     for(int s=0; s<numaSize;s++){
        printf("%d", numb[s]);
    }
   
   
  
   for (int i = 0; i < numaSize; i++) {
        for (int j = 0; j < numbSize; j++) {
            if (numa[i] == numb[j]) {
                diviseur[diviseurSize++] = numa[i];
                break;
            }
        }
   }
     printf("\nles diviseur commun sont: ");
    for (int i = 0; i < diviseurSize; i++) {
        printf("%d ", diviseur[i]);
    
    }
        
  printf("\nle plus grand commun diviseur est: %d", diviseur[diviseurSize - 1]);
   
   return 0;
}