#include <stdio.h>

int gcd(int m, int n){
    int r;
    if(n==0) return m;
    
    
    while(n!=0){
       r= m%n;
       m=n;
       n=r;
    }
    return m;
}


int main(){
   int n1, n2;
   printf("enter nbr 1 et nbr 2 \n");
   scanf("%d %d", &n1, &n2);


printf("%d",  gcd(n1,n2));



   return 0;

}
