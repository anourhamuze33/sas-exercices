#include <stdio.h>
int main(){
    int nt,r; 
    char k = '\0';
    printf("entrer your note "); 
    scanf("%d",&nt); 
    r=nt/10; 
    if(r<=5){
        r=5; } 
    if(nt>100 || nt<0){
            r=11; }
    switch(r){ 
        case 10: 
        k='A'; 
        break; 
        case 9:
        k='A';
        break;
        case 8:
        k='B';
        break; 
        case 7: 
        k='C'; 
        break; 
        case 6:
        k='A'; 
        break;
        case 5:
        k='F';
        break; 
        case 11: 
        printf("error ");
        break;
        } 
        if(r!=11){
        printf("votre note litterale est: %c", k);
        }
        return 0;
        }