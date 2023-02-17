//length of string without using len'

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
    int i;
    printf("enter string:\n");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++){

    }
    printf("the len of %s is %d",ch,i);
    ch[i]='\0';

    char ch1='Z';
    printf("%d",ch1);
}