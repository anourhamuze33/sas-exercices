#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
float notes;
char name[30];
char id[30];
}inf;

float moyenne(inf T[][20],int l, int j){
 float mo=0, moye;
        for(int i=2; i<=j+2; i++){
             mo = mo + T[l][i].notes;
        }
        moye =mo/j;
        return moye;
}


float max(inf T[][20],int l, int j){
   inf maxi;
   maxi.notes = T[l][2].notes;
    for(int i=2; i<j+2; i++){
       if(T[l][i].notes>maxi.notes){
         maxi.notes=T[l][i].notes;
       }
    }
   return maxi.notes;
}

float min(inf T[][20],int l, int j){
   inf mini;
   mini.notes=T[l][2].notes;
    
    for(int i=2;i<j+2;i++){
       if(T[l][i].notes<mini.notes){
         mini.notes=T[l][i].notes;
       }
    }
   return mini.notes;
}



int main()
{  
     inf noteId[350][20];
     inf d;
     int nbrnote,nbreleve,noteSize=0,eleveSize=0,op,j,s;
     
           printf("_______________hello________________\n\n\n");
           printf("entrer le nombre des eleve premier et les nombre des notes/matiere: ");
           scanf("%d %d",&nbreleve,&nbrnote);
           int c;
           while ((c = getchar()) != '\n' && c != EOF);
              for(int i=0; i<nbreleve;i++){
                 printf("entrer le nom et prenom d'eleve %d: ",i+1);
                 fgets(noteId[i][0].name, sizeof(noteId[i][0].name), stdin);
                 noteId[i][0].name[strcspn(noteId[i][0].name, "\n")] = '\0';
              }
     
              for(int i=0;i<nbreleve;i++){
                eleveSize++;
                printf("entrer ID de l'eleve %d: %s :\nID: ",i+1,noteId[i][0].id);
                
                fgets(noteId[i][1].id, sizeof(noteId[i][1].id), stdin);
                noteId[i][1].id[strcspn(noteId[i][1].id, "\n")] = '\0';
                printf("name: %s ,ID : %s\n",noteId[i][0].name ,noteId[i][1].id);
                
                for(int j=0;j<=nbrnote+1;j++){
                    do{
                     if(j<=1){ continue;}
                     else{
                      printf("entrer la note %d : ",j-1);
                      scanf("%f",&noteId[i][j].notes);
                      getchar();
                      if(i==0){noteSize++;}
                     }
                    
                }while(noteId[i][j].notes<0 || noteId[i][j].notes>20);
                }
              }
           printf("\n\n1: affichage des notes\n");
           printf("2: calcule du moyenne des notes de chaque eleve\n");
           printf("3: calcule de max\n");
           printf("4: calcule de min\n");
           printf("5: moyenne du classe\n");
           printf("6: Bulletin individuel\n");
           printf("7: exit \n");
           printf("\nvotre optin est: ");
           scanf("%d",&op);
           do{
                 switch(op){
                     case 1:
                        printf("tapper\n");
                        printf("1: pour tout les notes des eleves\n");
                        printf("2: pour les notes d'un specific eleve\n");
                        scanf("%d",&s);
                        switch(s){
                            case 1:
                             printf("____________________%d:affichage des notes______________________\n",op);
                             for(int i=0; i<eleveSize;i++){
                               printf("name: %s     ID : %s\n",noteId[i][0].name ,noteId[i][1].id);
                               for(int j=2; j<=noteSize+1;j++){
                               printf("la note %d est: %.2f\n",j-1, noteId[i][j].notes);
                               }
                             }
                            break;
                            case 2:
                            
                             printf("____________________%d:affichage des notes______________________\n",op);
                             printf("entrer l'ID de l'eleve pour afficher ces notes: ");
                             getchar();
                             fgets(d.id, sizeof(d.id), stdin);
                             d.id[strcspn(d.id, "\n")] = '\0';
                             for(int i=0; i<eleveSize;i++){
                              if(strcmp(d.id,noteId[i][1].id)==0){
                                printf("ID : %s d'eleve %s \na", d.id,noteId[i][0].name);
                                 for(int j=2; j<=noteSize+1;j++){
                                  printf("la note %d est: %.2f\n",j-1, noteId[i][j].notes);
                                 } 
                              }
                              else{
                              printf("ID not available");
                              }
                             }
                            break;
                            default: printf("option invalidee");
                            }
                        break;
                        case 2:
                             printf("_____________%dmoyenne de chaque eleve________________\n",op);
                             printf("tapper\n");
                             printf("1: pour tout les moyenne des eleves\n");
                             printf("2: pour le moyenne d'un specific eleve\n");
                             scanf("%d",&s);
                             switch(s){
                            case 1:
                             printf("____________________%d: moyenne______________________\n",op);
                             for(int i=0; i<eleveSize;i++){
                               printf("name: %s     ID : %s ",noteId[i][0].name ,noteId[i][1].id);
                               printf("  moyenne est: %.2f\n",moyenne(noteId,i,noteSize));
                             }
                            break;
                            case 2:
                             printf("____________________%d: moyenne______________________\n",op);
                             printf("entrer l'ID de l'eleve pour afficher ces notes: ");
                             getchar();
                             fgets(d.id, sizeof(d.id), stdin);
                             d.id[strcspn(d.id, "\n")] = '\0';
                             for(int i=0; i<eleveSize;i++){
                              if(strcmp(d.id,noteId[i][1].id)==0){
                                printf("ID : %s d'eleve %s \n", d.id,noteId[i][0].name);
                                printf("la moyenne est: %.2f",moyenne(noteId,d.notes,noteSize));
                              }
                              else{
                              printf("ID not available");
                              }
                             }
                            break;
                            }
                        break;    
                        case 3:
                             printf("_____________%dmaximum note de chaque eleve________________\n",op);
                             printf("tapper\n");
                             printf("1: pour tout les maximum notes des eleves\n");
                             printf("2: pour le maximum d'un specific eleve\n");
                             scanf("%d",&s);
                             switch(s){
                            case 1:
                             printf("____________________%d: maximum______________________\n",op);
                             for(int i=0; i<eleveSize;i++){
                               printf("name: %s     ID : %s ",noteId[i][0].name ,noteId[i][1].id);
                               printf("  la note maximale est: %.2f\n",max(noteId,i,noteSize));
                             }  
                            break;
                            case 2:
                             printf("____________________%d: moximum______________________\n",op);
                             printf("entrer l'ID de l'eleve pour afficher ce note maximale: ");
                             getchar();
                             fgets(d.id, sizeof(d.id), stdin);
                             d.id[strcspn(d.id, "\n")] = '\0';
                             for(int i=0; i<eleveSize;i++){
                              if(strcmp(d.id,noteId[i][1].id)==0){
                                printf("ID : %s d'eleve %s \n", d.id,noteId[i][0].name);
                                printf("la note maximale est: %.2f",max(noteId,d.notes,noteSize));
                              }
                              else{
                              printf("ID not available");
                              }
                             }
                            break;
                            }
                        break; 
                        case 4:
                             printf("_____________%dminimum note de chaque eleve________________\n",op);
                             printf("tapper\n");
                             printf("1: pour tout les minimum notes des eleves\n");
                             printf("2: pour le minimum d'un specific eleve\n");
                             scanf("%d",&s);
                             switch(s){
                            case 1:
                             printf("____________________%d: minimum______________________\n",op);
                             for(int i=0; i<eleveSize;i++){
                               printf("name: %s     ID : %s ",noteId[i][0].name ,noteId[i][1].id);
                               printf("  la note minimale est: %.2f\n", min(noteId,i,noteSize));
                             }  
                            break;
                            case 2:
                             printf("____________________%d: minimum______________________\n",op);
                             printf("entrer l'ID de l'eleve pour afficher ce note minimale: ");
                             getchar();
                             fgets(d.id, sizeof(d.id), stdin);
                             d.id[strcspn(d.id, "\n")] = '\0';
                             for(int i=0; i<eleveSize;i++){
                              if(strcmp(d.id,noteId[i][1].id)==0){
                                printf("ID : %s d'eleve %s \n", d.id,noteId[i][0].name);
                                printf("la note minimale est: %.2f",min(noteId,d.notes,noteSize));
                              }
                              else{
                              printf("ID not available");
                              }
                             }
                            break;
                            }
                        break;       
                        case 5:
                            printf("_____________%dmoyenne de classe________________\n",op);
                            float moyclasse=0;
                             float sommeclasse=0;
                             printf("les moyenne de classe est: ");
                             for(int i=0; i<eleveSize;i++){
                               sommeclasse=moyenne(noteId,i,noteSize)+sommeclasse;
                             }
                             moyclasse=sommeclasse/eleveSize;
                             printf("le moyenne de classe est: %.2f", moyclasse);
                        break;
                        case 6:
                        printf("___________espace Bulletin___________");
                        
                            printf("entrer l'ID de l'eleve pour afficher ce bulletin: ");
                             getchar();
                             fgets(d.id, sizeof(d.id), stdin);
                             d.id[strcspn(d.id, "\n")] = '\0';
                             for(int i=0; i<eleveSize;i++){
                              if(strcmp(d.id,noteId[i][1].id)==0){
                                printf("______bulltin______\nID : %s\neleve: %s \n", d.id,noteId[i][0].name);
                                 for(int j=2; j<=noteSize+1;j++){
                                  printf("la note %d est: %.2f\n",j-1, noteId[i][j].notes);
                                 } 
                              }
                              else{
                              printf("ID not available");
                              }
                               printf("la note maximale est: %.2f\n",max(noteId,d.notes,noteSize));
                               printf("la note minimale est: %.2f\n",min(noteId,d.notes,noteSize));
                               
                               
                               
                               float moyclasse=0;
                             float sommeclasse=0;
                             for(int i=0; i<eleveSize;i++){
                               sommeclasse=moyenne(noteId,i,noteSize)+sommeclasse;
                             }
                             moyclasse=sommeclasse/eleveSize;
                             printf("le moyenne de classe est: %.2f", moyclasse);
                             printf("\nla moyenne est: %.2f",moyenne(noteId,d.notes,noteSize));
                        break;
                }
                 }
           }while(op>=7);
           if(op==7){
               exit(0);
           }
    return 0;
}