//sorting in 2d strings

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void input(char **str1,int noc);

void print(char **str1,int noc);

void sort(char **str,char *test,int noc);

void input(char **str1,int noc){
    int i,j=0;
    for(i=0;i<noc;i++){
    printf("enter str %d",j++);
    fflush(stdin);
    scanf("%s",*(str1+i));
}
}
void print(char **str1,int noc){
    int i,j=0;
    for(i=0;i<noc;i++){
        printf("%s\n",*(str1+i));
    }
}

void sort(char **str,char *test,int noc){
    int i,j,k,temp;
    for(i=0;i<noc;i++){
       for(j=i+1;j<noc;j++){
    if(strcmp(*(str+i),*(str+j))>0){
        strcpy(test,*(str+i));
        strcpy(*(str+i),*(str+j));
        strcpy(*(str+j),test);
    } 

       }

}

}

void main(){
    char **str1,*test;
    int i,j,noc,k;
     printf("enter noc\n");
    scanf("%d",&noc);
   str1=(char **)malloc(sizeof(char *)*noc);
    for(i=0;i<noc;i++){
        *(str1+i)=(char *)malloc(sizeof(char)*50);
    }

test=(char *)malloc(sizeof(char)*noc);
input(str1,noc);
print(str1,noc);
printf("after sort\n");
sort(str1,test,noc);
print(str1,noc);

      
}

