//145==1+24+125=145

//strong number using recursion

#include<stdio.h>
#include<conio.h>
int fact(int r){
        if(r==0||r==1){
            return 1;
        }
        else{
            return r*fact(r-1);
        }
    }
int digi(int n,int sum,int r){
    if(n==0){
        return sum;
    }
    else{
       r=n%10;
       n=n/10; 
       return digi(n,sum+fact(r),r);
    }
    
}
void main(){
int n,sum,r;
printf("enter n\n");
scanf("%d",&n);
//printf("%d\t\t\t\n",digi(n,0,r));
if(n==digi(n,0,r)){
printf("%d \t\t\t is strong\n",n);
}
else{
    printf("%d is not strong\n",n);
}
}