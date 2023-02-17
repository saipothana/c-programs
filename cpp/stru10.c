//structure using arrays + pointers


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct cricket{
    char player[30];
    int runs;
   char grade;
    int rank;
    char country[30];

};
void main(){


struct cricket *p;
int noc,i;
printf("enter  noc\n");
scanf("%d",&noc);
  p=(struct cricket *)calloc(noc,sizeof(struct cricket));
for(i=0;i<noc;i++){
  
    printf("=======================\n");
    printf("enter player info  %d\n",i);
    printf("========================\n");
   printf("  enter palyer name      \n");
scanf("%s",&(p+i)->player);
   printf("  enter palyer    runs \n  ");
scanf("%d",&(p+i)->runs);
  printf("  enter palyer    grade \n  ");
  fflush(stdin);
scanf("%c",&(p+i)->grade);

  printf("  enter palyer    rank \n  ");
scanf("%d",&(p+i)->rank);
  printf("  enter palyer  country \n  ");
scanf("%s",&(p+i)->country);
 printf("=======================\n");


}

for(i=0;i<noc;i++){
    printf("=====================\n");
    printf("  player info    %d\n",i);
    printf("=====================\n");   
    printf("name=%s\n",(p+i)->player);
     printf("runs=%d\n",(p+i)->runs);
    printf("grade=%c\n",(p+i)->grade);
       printf("rank=%d\n",(p+i)->rank);
        printf("country=%s\n",(p+i)->country);
        


}

}