//find the length of the string using pointers

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void input(char *str1);
int len(char *str);
void input(char *str1){
    printf("enter str1\n");
    fflush(stdin);
    gets(str1);
}
int len(char *str){
    int i,j=0;
   // for(i=0;*(str+i)!='\0';i++){
     //   j++;
    //}

    int leng=strlen(str);

    return leng;
}
void main(){
    //char str[100]---------is also posibble
char *str;
int size,i,j;  //give string   name=jeevan
printf("enter size\n");
scanf("%d",&size);
str=(char *)malloc(sizeof(char)*size);

input(str);
printf("the len is %d\n",len(str));
}