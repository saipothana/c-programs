//wap that uses a table of integers whose size will be specified interactively at run time
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int *i,*table;

    int size;
    printf("enter size\n");
    scanf("%d",&size);
printf("\n");
    //not we allocate space to tables

   // table=(int *)malloc(size * sizeof(int));
if((table=(int *)malloc(size * sizeof(int)))==NULL){  //allocates 20baytes space in 
    printf("no space\n");
   // exit(0);
}

    for(i=table;i<table+size;i++){
        scanf("%d",i);
    }

    for(i=table+size-1;i>=table;i--){
        printf("%d is stored at %u\n",*i,i);
    }
}

