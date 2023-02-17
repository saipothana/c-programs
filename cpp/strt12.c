//strncmp: used to compare n strings and produces o/p '0' if equal ||.. -1 if not equal otherwise +1

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char ch[30];
    char ch1[30];
    printf("enter ch\n");
    scanf("%s",ch);

     printf("enter ch\n");
    scanf("%s",ch1);

    printf("%d",strncmp(ch,ch1,3));

}