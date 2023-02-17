//string length using pointers

#include<stdio.h>
#include<conio.h>
void main(){
    char *ch;
    int i,j=0;
    printf("entes string");
    gets(ch);
    for(i=0;*(ch+i)!='\0';i++){
     j++;
    }

    printf("the len of %s is %d",ch,j);
}