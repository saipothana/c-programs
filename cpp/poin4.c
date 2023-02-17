//wap to illastrate the use of * ptr in c

#include<stdio.h>
#include<conio.h>
void main(){

    int a=120,*p,n,y;
//int *p=&a;

p=&a;
n=*p;//n=*&a
y=*&n;
printf(" a %d is stored in address %u\n",a,&a);
printf("%d is stored at address %u\n",*&a,&a);
printf("%d is stored at address %u\n",*&a,p);
printf("%d is stored at address %u\n",*p,p);
printf("%d is stored at address %u\n",n,p);
printf("%u is stored at address %u\n",p,&p);//p has value that equal to memory address of var declares and the addresss of p is given by &p
printf("%d is stored at address %u\n",n,&n);
printf("%d\n",y);


*p=25;  // this puts the memory loc  of p which is value of a to 25 so old  a is replaced to 25


printf("%d\n",a);
}