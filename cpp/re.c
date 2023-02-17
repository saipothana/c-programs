#include<stdio.h>
#include<conio.h>
int add(int n){
    int sum;

    if(n==1){
        return 1;
    }
    else{
       sum=n+add(n-1);
        return sum;
    }
}
void main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("the sum of %d is %d",n,add(n));
    getch();
}