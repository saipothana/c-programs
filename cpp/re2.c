#include<stdio.h>
#include<conio.h>
int nsum(int n);
int nsum(int n){
if(n<=50){
    printf("%d\n",n);
    return nsum(n+1);
}

}

void main(){
    int n=1;
    nsum(n);
}