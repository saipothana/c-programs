//concat n strings  .............put hold----

#include<stdio.h>
#include<conio.h>
void main(){
    char ch1[30],ch2[30],ch3[30];
    int i,noc,j=0;
    printf("enter char");
    gets(ch1);

     printf("enter char");
    gets(ch2);

    printf("enter noc\n");
    scanf("%d",&noc);

    for(i=0;ch1[i]!='\0';i++){
ch3[j++]=ch1[i];
    }

    for(i=0;i<noc;i++){
        ch3[j++]=ch2[i];
    }

    ch3[j]='\0';
    puts(ch3);
}