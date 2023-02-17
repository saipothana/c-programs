//string using user input  using getche and newline

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
    ch[i]=getche();//after taking integer input inorder to take char input we use fflush or gr=etche 
printf("\n");//if we dont take newline then it consider enter also a char
    }

   ch[i]='\0';//if i not put ch[i]==nul here it going to print additoonal chars
   printf("%s",ch);
}