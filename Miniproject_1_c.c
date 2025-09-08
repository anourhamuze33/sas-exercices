#include <stdio.h>

float moyenne(float T[], int j){
 float mo=0, moye;
        for(int i=0; i<j; i++){
             mo = mo + T[i];
        }
        moye =mo/j;
        return moye;
}

float max(float T[], int j){
   float maxi=T[0];
    for(int i=0; i<j; i++){
       if(T[i]>maxi){
         maxi=T[i];
       }
    }
   return maxi ;
}

float min(float T[], int j){
   float mini=T[0];
    
    for(int i=0;i<j;i++){
       if(T[i]<mini){
         mini=T[i];
       }
    }
   return mini;
}



int main(){
      int nbrnote,nbrnote1,option,op1,change,c,d,e;
      int numaSize= 0;
      float not[100];
      int work =1;
 do{
       do{
       printf("_____________menu principale__________________\n");
       printf("\n1: espase des notes \n");
       printf("2: espace eleve (working on it)\n");
       printf("3: menu\n");
       printf("entrer votre option:\n");
    
      printf("votre optin est: ");
       scanf("%d",&option);
      }while(option==3);
      if(option==2) {
      printf("Espace élève en construction\n");
      break;
      }
      if(option>3){
      printf("option invalide");
      break;
      }
     switch(option){
   
      case 1:
      printf("_________________%d espace des notes____________________\n",option);
      printf("\nenter le nombre des notes: ");
         scanf("%d", &nbrnote);
         printf("\n");
        for(int i=0; i<nbrnote;i++){
          printf("enter la note %d: ",i+1);
          scanf("%f",&not[i]);
             numaSize++;
        }
         printf("\nles notes on etait ajoutes\n\n");
        }
         printf("\n_________espace des notes_________\n");
       do{
            printf("\n1: affichage des notes\n");
            printf("2: calcule du moyenne des notes\n");
            printf("3: calcule de max\n");
            printf("4: calcule de min\n");
            printf("5: ajout des notes\n");
            printf("6: suprimer une note\n");
            printf("7: modifier une note\n");
            printf("8: chercher une note\n");
            printf("9: retour to the principal menu \n");
       
            printf("\nvotre optin est: ");
            scanf("%d",&op1);
            printf("\n");
        switch(op1){
          case 1:
         
            printf("________________%d:affichage des notes_________________\n\n",op1);
            for(int i=0; i<numaSize;i++){
            printf("la note %d est %.2f\n", i+1, not[i]);
           }
           break;
           
          case 2:
            printf("____________________%d calcule de moyenne______________________\n",op1);
            printf("\nle moyenne des notes est: %.2f\n", moyenne(not, numaSize));
            break;
          case 3:
            printf("____________________%d calcule du max______________________\n",op1);
            printf("\nle maximum des notes est: %.2f\n", max(not, numaSize));
            break;
          case 4:
           printf("____________________%d calcule du max______________________\n",op1);
           printf("\nle minimum des notes est: %.2f\n", min(not, numaSize));
           break;
          case 5:
           printf("\nenter le nombre des notes a ajouter: ");
           scanf("%d", &nbrnote1);
           printf("\n");
            for(int i=1; i<=nbrnote1;i++){
              printf("enter la note %d: ",numaSize+1);
              scanf("%f",&not[numaSize]);
              numaSize++;
            }
            printf("\nles notes sont ajoutee successfully\n");
            break;
          case 6:  
            printf("what note you want to remove: ");
            scanf("%d", &e);
            if(e<1||e>numaSize){
            printf("this note do not exist");
            }
            for(int i=e; i<=numaSize; i++){
            not[i-1]=not[i];
            }
            numaSize--;
            printf("\nla note %d est suprimee successfully\n",e);
              break;
          case 7:
            printf("\nquel note you want to change: ");
            scanf("%d", &change);
            if(change<1||change>numaSize){
            printf("this note do not exist");
            }
            else{
            printf("enter la modification de la note %d: ",change);
            scanf("%f",&not[change-1]);
            printf("\nla note %d est modifiee successfully\n",change);
            }
              break;
         case 8:
            printf("quel note you want to search for: ");
            scanf("%d", &d);
            if(d<1||d>numaSize){
            printf("\nthis note do not exist\n");
            }
            else{
            printf("\nla note %d est %.2f\n",d,not[d-1]);
            }
         }
          if(op1>9){
          printf("optioninvalide");
          }
        }while(op1!=9);
       }while(op1==9 || option==3);
       
       
       
     return 0;
   }