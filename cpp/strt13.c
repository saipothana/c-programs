//strncat: used to concate n strings

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

    printf("%s",strncat(ch,ch1,3));

}