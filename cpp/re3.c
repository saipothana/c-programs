#include<stdio.h>
#include<conio.h>
int nsum(int n,int i,int s);
int nsum(int n,int i,int s){
if(i==0){
    return s;
}
else{
printf(" %d\n",n+s);
    return nsum(n,--i,s+i);

}
}

void main(){
    int n=50;
   printf("%d",nsum(n,n,0));
}