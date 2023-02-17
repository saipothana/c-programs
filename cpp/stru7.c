//struct using arrays

#include<stdio.h>
#include<conio.h>
#include <dos.h>

struct record{
    char name[30];
    int no;
    float fee;
    char course[30];
};
void main(){
  
  struct record s[100];
  int noc,i;
  printf("enter array size\n");
  scanf("%d",&noc);
  for(i=0;i<noc;i++){
printf("==============================================\n");
printf("enter record %d: ",i);
printf("==============================================\n");
printf("enter name\n");
scanf("%s",&s[i].name);
printf("enter no\n");
scanf("%d",&s[i].no);
printf("enter fee\n");
scanf("%f",&s[i].fee);
printf("enter course\n");
scanf("%s",&s[i].course);
printf("==============================================\n");

  }

  for(i=0;i<noc;i++){
printf("==============================================\n");
printf("record %d: ",i);
printf("==============================================\n");
    printf("name=%s\n",s[i].name);
     printf("roll=%d\n",s[i].no);
      printf("fee=%f\n",s[i].fee);
       printf("course=%s\n",s[i].course);
 printf("==================%d=======================\n",i);   
 delay(500); 
    
  }

}