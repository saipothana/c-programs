//reverse a string using pointers

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void input(char *str);

void print(char *str);

void rev(char *str,char *str1);

void input(char *str){
    printf("enter str\n");
scanf("%s",str);

}
void print(char *str){
   
   printf("%s",str);
}

void rev(char *str,char *str1){
int i,j,k=0;
for(i=0;*(str+i)!='\0';i++){

}
for(j=i;j>0;j--){
   // printf("%d\n",j);
*(str1+k++)= *(str+j);

}
*(str1+k)='\0';

printf("%s",str1);
}

void main(){
char *str1,*str2;
int size,i,j;
printf("enter size\n");
scanf("%d",&size);
  str1=(char *)malloc(sizeof(char)*size);
    str2=(char *)malloc(sizeof(char)*size);
    printf("before rev enter str\n");
    input(str1);
    print(str1);

    printf("\n");
   
    printf("after rev\n");

    rev(str1,str2);
    print(str2);
   /*
    print(str2);
    */
}