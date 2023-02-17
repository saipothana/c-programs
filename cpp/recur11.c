//reverse a number using recursion

#include<stdio.h>
#include<conio.h>
static int sum=0;
int rev(int n){
    if(n==0){
        return 0;
    }
    else{
int r=n%10;
sum=sum*10+r;
//n=n/10;
//printf("%d ",sum);
 rev(n/10);
    }

}
void main(){
int n,sum,r;
printf("enter n\n");
scanf("%d",&n);
rev(n);
printf("%d",sum);
}

