//additon of matrix by passing address to the pointer
//----------------imp---------------------------------

#include<stdio.h>
int sum(int *a,int size);
int sum(int *a,int size){
    int add=0,i;
for(i=0;i<size;i++){
add=add+*(a+i);
}
//printf("%d",add);
return add;
}

void main(){
    int a[100],size,i;

    int (*ptr)(int *,int)=&sum;   //here i m passing a pointer thats why im storing a pointer
    printf("enter size\n");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        printf("enter ele %d:\n",i);
        scanf("%d",&a[i]);
    }

    int res=(*ptr)(a,size);
    printf("%d",res);
  
  
    }



  
