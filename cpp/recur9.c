//sum of digits using recursion ----------//

#include<stdio.h>
#include<conio.h>
//int sumd(int n,int r,int sum){
    int sumd(int n){
    if(n==0){
        return 0;
    }
    else{
     // r=n%10;
      //sum=sum+r;
      //printf("%d\n",sum);
      //  return sumd(n/10,r,sum);
      return n%10+sumd(n/10);
    }
}
void main(){
int n,r,i;
printf("enter n\n");
scanf("%d",&n);
//int z=sumd(n,r,0);
int z=sumd(n);
printf("%d",z);
}
