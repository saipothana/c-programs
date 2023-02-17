//xpow(n) --using recursion

#include<stdio.h>
#include<conio.h>
int power(int n,int r){
    if(r==0){
return 1;
    }
    else{
        //printf("%d\n",n*n);
        return n*power(n,r-1);
    }
}
void main(){
int n,r,i;
printf("enter n r\n");
scanf("%d %d",&n,&r);
printf("%d",power(n,r));
}