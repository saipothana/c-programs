//left rotation multiple times
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],i,j,k,size,n,z;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter arr1: %d\n",i);
        scanf("%d",&a[i]);
    
    }
    printf("before rotate:\n");
    printf("[");
    for(i=0;i<size;i++){
        printf("%d,",a[i]);
    }
    printf("\b]");

  printf("enter n");
    scanf("%d",&n);
for(i=0;i<=n;i++){
    z=a[0];
    for(j=0;j<size;j++){
     a[j]=a[j+1];
    }
    a[size-1]=z;
    printf("rot:%d\n",i);
printf("[");
for(k=0;k<size;k++){
    printf("%d,",a[k]);
}
 printf("\b]");
}
}