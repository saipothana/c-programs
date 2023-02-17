//addition of two numbers using function pointers 
#include<stdio.h>
#include<conio.h>

int add(int a,int b){
    return a+b;
}
void main(){
    int a,b;
    printf("enter a and b\n");

scanf("%d %d",&a,&b);

int (*ptr)(int,int)=&add;
int z=(*ptr)(a,b);
printf("%d",z);
}
