//Write a C program to input elements in an array and print array using pointers. How to input and display array elements using pointer in C .

#include<stdio.h>
#include<stdlib.h>
void main(){
    int *arr,i,j,size;

    printf("enter size\n");
    scanf("%d",&size);

    arr=(int *)malloc(size * sizeof(int));

    for(i=0;i<size;i++){
        printf("enter array element: %d\n",i);
        scanf("%d",(arr+i));
    }

    for(i=0;i<size;i++){
        printf("%d ",*(arr+i));
    }
}