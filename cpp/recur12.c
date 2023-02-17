//square of number using recursion'
#include<stdio.h>
#include<conio.h>
int square(int n,int s,int i){
    if(i>n){
        return s;
    }
    else{
        s=s+n;
        //printf("%d",s);
        return square(n,s,i+1);
    }
}
void main(){
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    int z=square(n,0,1);
    printf("%d",z);
}