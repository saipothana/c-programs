//pointers intro 

//so we have variables concept

//int x=1000;

//here we are storing the value 1000 by allocating some memory like(memory=2k)

//sore we can access that var using a var-name  or MEMORY ADDRESS(2K).

//since memory address are also simply numbers so we will store these address in another variable with differt memmory addresss..this is pointer var

//basically POINTER VAR HOLDS THE MEMORY ADDRESS INSTEAD OF VAR

//p=&x...here in some address(5k) we are storing the address of x as a value TO P
//=============================================================================================================================

//WAP to print address of a variable along with its value

//========================================================================================================================



#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    char c;
    float f;
    double n;
    printf("enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    fflush(stdin);
    scanf("%c",&c);
     printf("enter value of f\n");
    scanf("%f",&f);
     printf("enter value of n\n");
    scanf("%ld",&n);

    printf("%d\n",a);
     printf("%c\n",c);
      printf("%f\n",f);
       printf("%ld\n",n);

 printf("%u\n",&a);
     printf("%u\n",&c);
      printf("%u\n",&f);
       printf("%u\n",&n);

//%u used to access address of var

}
