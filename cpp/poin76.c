//copy one string to another 


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void input(char *str);
void print(char *str);
void cop(char *str,char *str1);

void input(char *str){
   
    printf("enter str1\n");
fflush(stdin);
gets(str);
}

void print(char *str){
    int i,j;

    for(i=0;*(str+i)!='\0';i++);
    printf("%s",str);
}

void cop(char *str,char *str1){
    int i,j=0;
    for(i=0;*(str+i)!='\0';i++){
        *(str1+j++) = *(str+i);
    }

}
void main(){
    char str1[100],str2[100];
    char *p1=str1;
    char *p2=str2;
    int i,j;
    printf("the str before copy\n");
    input(p1);
    print(p1);
    printf("after copy\n");
    cop(p1,p2);
   
    print(p2);
}