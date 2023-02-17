//product of array elements in c

#include<stdio.h>

int *pr(int *a,int *size){
    static int i,pro=1;
    for(i=0;i<*size;i++){
pro*=*(a+i);
    }
    return &pro;  //here we are returning addresss and storing in *z
}

void main(){
    int a[100],size,i;
    printf("enter size\n");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        printf("enter ele:%d\n",i);
        scanf("%d",&a[i]);
    }
    int *z=pr(a,&size); 
    printf("%d",*z);
}