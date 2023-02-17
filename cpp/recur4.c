//sun of n numbers

#include<stdio.h>
#include<conio.h>
int sum(int n);
int sum(int n){
if(n==0){
    return 0;
}
else{
    return n+sum(n-1);
}
}
void main(){
int n;
printf("enter n\n");
scanf("%d",&n);
printf("the sum of %d no's is %d",n,sum(n));
}