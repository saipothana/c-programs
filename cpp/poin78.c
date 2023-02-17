//compare two strings

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void input(char *str);
void print(char *str);


void input(char *str){
    printf("enter str1\n");
    fflush(stdin);
    gets(str);

   
}
void print(char *str){
    printf("%s",str);

}

void main(){
    char *str1,*str2;

 int size,i,j,k;
printf("enter size\n");
scanf("%d",&size);
    str1=(char *)malloc(sizeof(char)*size);
    str2=(char *)malloc(sizeof(char)*size);

    printf("enter str1\n");
    input(str1);
    printf("\n");
    printf("enter str2\n");
    input(str2);

print("\n");
if(*str1==*str2){
    
    printf("%s %s are equal\n",str1,*str2);
}
else{
    printf("%s %s are not equal\n",str1,str2);
}


/*
if(strcmp(str1,str2)==0){
    printf("equal\n");
}
else{
    printf("not\n");
}
*/

}
