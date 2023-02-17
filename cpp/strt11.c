//strncpy :--used to copy n characters like jeevan--4 --jeev

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char ch[30];
    char ch1[30];
    printf("enter char \n");
    gets(ch);
    printf("%s\n",strncpy(ch1,ch,4));  //
}