//learning series

//how to print a pointer
#include<stdio.h>
#include<conio.h>
void main(){
    int a=10;
    int *p;
    p=&a;
    printf("%d\n",a);//it is used to print the value in a

    printf("%d\n",*p);  //it is ues to print the value pointing to the pointer


   printf("%d\n",**&p);//it is ued to print the address of p(i.e p address) and the value in it(i.e a address) and next star print the pointer value

printf("%d\n",*&a);//ti is used to print address of a and the value in it

printf("%d\n",*&*p);//*p priint  the pointer value--10  and & is uesd to print address of the a---and * prints 10
printf("%d\n",*&*p&*p);// *p it prints pointer value 10 & used to print the address of a,,*p used to print the value in a,,,& is ued for address of a * used to print the value of a
printf("%u\n",&*p);
printf("%u\n",*&*p&a);
printf("%d\n",(*(*(&(&(*(*(&p))))))));
}