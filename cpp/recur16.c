//reverse num using recursion
#include<stdio.h>
#include<conio.h>
int rev(int n,int sum){
    if(n==0){
        return sum;
    }
    else{
        sum=sum*10+n%10;
        return rev(n/10,sum);
    }
}
void main(){
    int n,s;
     printf("enter n\n");
    scanf("%d",&n);
    printf("%d",rev(n,0));
}