//funs returning pointers

#include<stdio.h>
int *max(int *a,int *b);

int *max(int *a,int *b){
    if(*a>*b){
        return a;
    }
    else{
        return b;
    }
}

void main(){
int a,b;

printf("enter a,b\n");
scanf("%d %d",&a,&b);
int *p=max(&a,&b);
printf("%d",*p);


}