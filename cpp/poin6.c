//pointer arthematic operation

#include<stdio.h>
#include<conio.h>
void main(){
int a,b,*p1,*p2;
printf("enter a\n");
scanf("%d",&a);

printf("enter b\n");
scanf("%d",&b);

p1=&a;
p2=&b;
int ch;
printf("enter 1 for add \n2for sub\n 3 for mul\n 4 fuor div\n");
scanf("%d",&ch);
switch(ch){
    case 1:printf("the add of two num is %d + %d =%d",*p1,*p2,(*p1 + *p2));
    break;
     case 2:printf("the add of two num is %d - %d =%d",*p1,*p2,(*p1 - *p2));
    break;
     case 3:printf("the add of two num is %d * %d =%d",*p1,*p2,(*p1 * *p2));
    break;
     case 4:printf("the add of two num is %d / %d =%d",*p1,*p2,(*p1 / *p2));
    break;
    case 5:printf("the other like %d + %d=%d\n",4,*p2,4* *p2);//we can multiply a value (4 ) with integer
    break;
    default: printf("wrong choice\n");

}



}
