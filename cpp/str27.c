//substring   


//a b c d e f g h i j k l  --------sub(4,8)--EFGH

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    char ch[30];
    int noc,i,in1,in2;
    printf("enter noc\n");
    scanf("%d",&noc);
    printf("enter in1");
    scanf("%d",&in1);
    printf("enter in2");
    scanf("%d",&in2);

    for(i=0;i<noc;i++){
        printf("enter elements:%d\n",i);
        fflush(stdin);
        scanf("%c",&ch[i]);
    }

    for(i=in1;i<in2;i++){
        printf("%c",ch[i]);
    }

    ch[i]='\0';

}