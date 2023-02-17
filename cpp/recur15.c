//product of dig using recursion

#include<stdio.h>
#include<conio.h>
int prodigi(int n,int r,int s){
    if(n==0){
return s;
    }
    else{
        
       r=n%10;
       s=s*r;
       
        //printf("%d",s);
        return prodigi(n/10,r,s);
    }
}
void main(){
   int n,r,i;
    printf("enter n\n");
    scanf("%d",&n);
    printf("%d",prodigi(n,r,1));
    //23sumdigi(n,1);
}