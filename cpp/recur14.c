//sum of digits using recursion

#include<stdio.h>
#include<conio.h>
int sumdigi(int n,int r,int s){
    if(n==0){
return s;
    }
    else{
        
       r=n%10;
       s=s+r;
       
        //printf("%d",s);
        return sumdigi(n/10,r,s);
    }
}
void main(){
   int n,r,i;
    printf("enter n\n");
    scanf("%d",&n);
    printf("%d",sumdigi(n,r,0));
    //23sumdigi(n,0);
}