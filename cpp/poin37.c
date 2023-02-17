//display array

#include<stdio.h>

int *dis(int a[100],int size);

int *dis(int a[100],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    return *dis;
}

void main(){
    int a[100],size;

printf("enter size\n");
scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter ele %d:\n",i);
        scanf("%d",&a[i]);
    }

    int *n=dis(&a[0],&size);
    
}