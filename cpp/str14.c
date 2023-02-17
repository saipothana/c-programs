//string using user input  using fflush and getchar

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    char ch[30];
    int noc,i,j;
    printf("enter noc\n");
    scanf("%d",&noc);

    printf("enter the string\n");
    for(i=0;i<noc;i++){
        printf("enter char %d\n",i);
        fflush(stdin);//after taking integer input inorder to take char input we use fflush or gr=etche 
ch[i]=getchar();
    }

   ch[i]='\0';//if i not put ch[i]==nul here it going to print additoonal chars
   printf("%s",ch);
}