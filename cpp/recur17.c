//palindrome num using recursion
#include<stdio.h>
#include<conio.h>
int pali(int n,int sum){
    if(n==0){
        return sum;
    }
    else{
        sum=sum*10+n%10;
        return pali(n/10,sum);
    }
}
void main(){
    int n,s;
     printf("enter n\n");
    scanf("%d",&n);
    if(n==pali(n,0)){
        printf("%d is plai\n",n);
    }
    else{
        printf("%d not pali\n",n);
    }
}