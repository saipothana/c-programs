//sum of n numbers

#include<stdio.h>
#include<conio.h>
int sums(int i,int sum,int n){
    if(i==n){
 printf("%d",sum);
        
        return 0;
    }
    else{
        sum=sum+i;
       
        return sums(i+1,sum,n);
    }
}
void main(){
int n,i,sum;
printf("enter n\n");
scanf("%d",&n);

sums(1,0,n);

}