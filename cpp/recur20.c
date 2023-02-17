//gcd of two numbers

#include<stdio.h>
#include<conio.h>
int gcd(int a,int b){
    if(a==0){
return b;
    }
    else if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
    }
     
void main(){
int n,q,r,a,b;
printf("enetr 2 num\n");
scanf("%d %d",&a,&b);
printf("%d",gcd(a,b));
}