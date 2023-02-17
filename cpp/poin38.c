//point in function 

//factorial using pointer in functions 

#include<stdio.h>

int fact(int n){
    int i,s=1;

    while(n>0){
        s=s*n;
        n--;
    }

    return s;
}

void main(){
    int n;
     int (*ptr)(int)=&fact;
    printf("enter the n\n");
    scanf("%d",&n);
    

    int z=(*ptr)(n);
    printf("%d",z);
}