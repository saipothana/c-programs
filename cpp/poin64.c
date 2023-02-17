//Program to perform arithmetic operations on number using pointers.

/*


Input

Input num1: 10
Input num2: 20
Output

Sum = 30
Difference = -10
Product = 200
Quotient = 0

*/

#include<stdio.h>
#include<conio.h>

void main(){
    int a,b;

    printf("enter two num\n");
    scanf("%d %d",&a,&b);


    int *p1=&a;

    int *p2=&b;
    printf("sum = %d\n ",(*p1+*p2));

    printf("difference = %d\n",(*p1-*p2));

    printf("product = %d\n ",(*p1 * *p2));

    printf("quotient = %d ",(*p1 / *p2));


}

