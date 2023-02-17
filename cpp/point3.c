//print 1d array using pointers static

#include<stdio.h>
#include<conio.h>
void main(){
    int a[5]={1,2,3,4,5},i,*p;
p=&a[0];//if we take one element as pointer then whole array convert into pointer

for(i=0;i<5;i++){
    printf("%d\n",*(a+i));
}
}