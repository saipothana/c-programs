//concat two strings

#include<stdio.h>
#include<conio.h>
void main(){
    char ch1[30],ch2[30],ch3[30];
    int i,j=0;
    printf("enter 1st str\n");
    gets(ch1);
    printf("enter 2nd str\n");
    gets(ch2);
    for(i=0;ch1[i]!='\0';i++){
        ch3[j++]=ch1[i];
    }
    for(i=0;ch2[i]!='\0';i++){
        ch3[j++]=ch2[i];
    }
    for(i=0;ch3[i]!='\0';i++);
    ch3[j]='\0';
    printf("the %s",ch3);


    
}