//pointer to pointer **p

#include<stdio.h>
#include<conio.h>
void  main(){
    int a=100,*p1,**p2;
    p1=&a;
    //p2=*p1;
//p2=&p1;
printf("%u\n",p1);
printf("%u\n",&a);
printf("%u\n",**p2);
}