//passing pointer as an arguments
//----------------------------------------important----------------------
#include<stdio.h>
#include<conio.h>

int sum(int *a,int *size){
    int add=0,i;
    for(i=0;i<*size;i++){
      add=add+*(a+i);  
    }
    return add;
}

void main(){
    int a[100],size,i;

      printf("enter size\n");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        printf("enter ele %d:\n",i);
        scanf("%d",&a[i]);
    }

    int z=sum(a,&size);
    printf("%d",z);

}