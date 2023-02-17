//fibonaci till n

#include<stdio.h>
#include<conio.h>
int fibo(int a,int b,int n,int i){
    if(n==i){
return 0;
    }
    else{
        
int c=a+b;
printf("%d\n",c);
//a=b;b=c;
        return fibo(b,c,n,i+1);//or without i we can write n-1
    }
}
void main(){
int n,i,sum,a=0,b=1;
printf("enter n\n");
scanf("%d",&n);

printf("%d\n",a);
printf("%d\n",b);
fibo(a,b,n-2,0);
}