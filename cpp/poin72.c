//how to access td arrays using functios in pointers

#include<stdio.h>
#include<stdlib.h>
void input(int **arr,int *r,int *c);
void print(int **arr,int *r,int *c);

void input(int **arr,int *r,int *c){
    int i,j;
    for(i=0;i<*r;i++){
        printf("enter rows ele:%d\n",i);
        for(j=0;j<*c;j++){
            scanf("%d",(*(arr+i)+j));
        }
    }
}

void print(int **arr,int *r,int *c){
    int i,j;
    for(i=0;i<*r;i++){
       
        for(j=0;j<*c;j++){
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
        
    }
    free(arr); 
}


void main(){

   int **arr,r,c,i,k,j;
   printf("enter r and c\n");
scanf("%d %d",&r,&c);
arr=(int **)malloc(sizeof(int *)*r);

for(i=0;i<r;i++){
    *(arr+i)=(int *)malloc(sizeof(int)*c);
}

input(arr,&r,&c);
printf("/t/t/tprint 2d array\n");
print(arr,&r,&c);
}