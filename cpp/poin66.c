//Write a C program to swap two numbers using pointers and functions. How to swap two numbers using call by reference method. Logic to swap two number using pointers in C program.

//here we pass pointers as an argmunts

#include<stdio.h>
#include<conio.h>

int swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void main(){
    int a,b;
    printf("enter a and b\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("after swap a=%d b=%d\n",a,b);

}