//pointers as fun args

#include<stdio.h>
void swap(int *x,int *y);
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void main(){

int i=10,j=30;
swap(&i,&j);
printf("%d %d",i,j);
}