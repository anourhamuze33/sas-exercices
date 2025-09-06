#include<stdio.h>
#include<math.h>
int main()
{
    int n=0;
    printf("entrer un nombre: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
    int k=pow(i,2);
     if(k<=n){
       if(k%2==0){
     printf("%d\n",k);
        }
     }
    }
    return 0;
}