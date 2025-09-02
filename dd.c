#include <stdio.h>
int main(void)
 {
  
     int i;
     int j;

 for(i=1; i<=6; i++){
   for(j=1; j<=9-i;j++){
     printf(" ");
     if(i==4&& j==1 || i==5 &&  j==2){
          printf("*");
     }
   }
 
    for(j=1;j<=9; j++){
     printf("*");
     
     if(i!=9-i+4){
         break;
     }
     
   }
   printf("\n");
 }
 return 0;
 }


/*
int espaceStart = 9;
int colMax = espaceStart;
int removeSpace = colMax/2;


for (int i = 0; i <= colMax; i++)
{
  if(i>removeSpace){
    for (int j = 0; j < colMax - espaceStart - removeSpace; j++)
    {
        printf(" ");
    }
  }
  if(i>removeSpace){
    printf("*");
  }
  
  if(i>removeSpace){
    
    for (int j = 0; j < espaceStart*2; j++)
    {
      printf(" ");
    }
  }
  else{

    for (int j = 0; j < espaceStart+removeSpace+2; j++)
    {
      printf(" ");
    }
  }
  espaceStart--;
  
  
  printf("*\n");
}
*/


  
