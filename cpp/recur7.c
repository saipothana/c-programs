//fibonaci using formulae

#include<stdio.h>
#include<conio.h>
int fib(int n){
    if(n<2){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
void main(){
   int n,i,sum;
printf("enter n\n");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("%d",fib(n));
}

}