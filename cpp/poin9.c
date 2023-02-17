//print var in diff ways  using pointers

#include<stdio.h>
#include<conio.h>
void main(){
    int a=10,*p;
    p=&a;
    printf("%d\n",a);
     printf("%d\n",*p);
     printf("%d\n",*&*p);
     printf("%d\n",*&a);
      printf("%d\n",*&*&a);
      


}

