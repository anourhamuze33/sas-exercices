#include <stdio.h>
int main(){
   int m,j,a,m1,j1,a1;
   
   printf("entrer la premiere date sous fourm (mm/jj/aa) ");
   scanf("%d/%d/%d",&m, &j, &a);
   printf("entrerle dexieme date sous fourm (mm/jj/aa) ");
   scanf("%d/%d/%d",&m1, &j1, &a1);
   while(m>=12 && j>=31){
   if(a<a1){
   printf("%d/%d/%d est plus tot que %d/%d/%d", m,j,a,m1,j1,a1);
   }
   
       
   else if(a=a1 && m<m1){
   printf("%d/%d/%d est plus tot que %d/%d/%d", m,j,a,m1,j1,a1);
   }
   
   else if(a=a1 && m<m1 && j<j1){
   printf("%d/%d/%d est plus tot que %d/%d/%d", m,j,a,m1,j1,a1);
   }
   
   else{
   printf("%d/%d/%d est plus tot que %d/%d/%d", m1,j1,a1,m,j,a);
   }
   }
   return 0;

}