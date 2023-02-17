//===========================================================================================================================================

//pointer to fun in c(new concept)


//============================================================================================================================================

//addition of two numbers


#include<stdio.h>
#include<conio.h>

int sum(int a,int b);         
int sum(int a,int b){
    int z=a+b;
    return z;
}

void main(){
int a,b;

int (*ptr)(int,int)=&sum;   //so here the syntax is tht datatyoe (*ptr-name)(prototypr0),,,,,,,,,,it is storing the address of the function

 printf("enter a and b\n");
 scanf("%d %d",&a,&b);
 int c=(*ptr)(a,b);
 printf("%d",c);  
}