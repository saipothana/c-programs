//how can we declare the pointer var

//data-type*ptr-name

//* tells the ptr-name is a prt var
//data type is not the ptr data type but it is a data type of the var being pointed to p

#include<stdio.h>
#include<conio.h>
void main(){
    int a,*p;
    printf("enter a\n");
    scanf("%d",&a);
    p=&a;
    int y=*p;
    printf("%d\n",y);//this give 10
    printf("%d\n",*p);//this also give 10
}
//=============NOTE====================

//for ex  if float x;
//int *p;
//p=&x;
//this is======== wrong====== because we are taking float var but declaring ptr with int 