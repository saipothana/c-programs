//how to access a pointer 

//we can access using *--indirection or dereferencing operator

//

#include<stdio.h>
#include<conio.h>
void main(){
    int a,*p,n;
    a=32;
    p=&a;
    n=*p;
int j=*&a;//(*  --value of address)
    printf("%d\n",n);


     printf("%d\n",j);
}