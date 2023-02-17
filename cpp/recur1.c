//factorial of a number using recursion
#include<stdio.h>
#include<conio.h>
int fact(int n);
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);  //we know 5!=5*4*3*2*1----5*5-1+4*(4-1)---upto n==1||n=0
    }
}
void main(){
int c;
printf("enter value of n\n");
scanf("%d",&c);
printf(" the fact is %d",fact(c));
}

