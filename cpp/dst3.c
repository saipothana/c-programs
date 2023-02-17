// print ddstring  by taking user input         ...in ddstr  if i want to print the char of a str then i use j as travreser name[i][j]
//i for str and j for char in str ..jeevam if i want v to print i use name[i][3]---it print v

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30];
int i,nos;
    printf("enter nos\n");
    scanf("%d",&nos);

    for(i=0;i<nos;i++){
        printf("enter string %d\n",i);
        fflush(stdin);
        scanf("%s",&ch[i]);
    }


    for(i=0;i<nos;i++){
printf("%s\n",ch[i]);
    }
}