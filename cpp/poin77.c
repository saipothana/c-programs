//concatenate twp strings

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void input(char *str);
void print(char *str);
void con(char *str,char *str1);

void input(char *str){
    printf("enter str1\n");
    fflush(stdin);
    gets(str);

   
}

void print(char *str){ 

printf("%s",str);


}
void con(char *str,char *str1){
 /*   int i;
    for(i=0;*(str+i)!='\0';i++){

    }
    int j;
    for(j=0;*(str1+j)!='\0';j++){
        *(str+i++)=*(str1+j);
    }
    *(str+i)='\0';   // so upto null it executes
    */ 

   str=strcat(str,str1);
   
}

void main(){
    char *str1,*str2,*str3;
    int size,i,j,k;
printf("enter size\n");
scanf("%d",&size);
    str1=(char *)malloc(sizeof(char)*size);
    str2=(char *)malloc(sizeof(char)*size);
    str3=(char *)malloc(sizeof(char)*size);

    printf("the str 1 is\n");
    input(str1);
    print(str1);

      printf("the str 2 is\n");
    input(str2);
    print(str2);

    print("concat is\n");
    con(str1,str2);
    print(str1);


}