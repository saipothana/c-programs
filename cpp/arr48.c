//right rotation multiple times
#include<stdio.h>
#include<conio.h>
#include<dos.h>
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

  printf("enter n \n");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        z=a[size-1];
        for(j=size-1;j>=0;j--){
            a[j+1]=a[j];
        }
        a[0]=z;
         printf("rot:%d\n",i);
printf("[");
for(k=0;k<size;k++){
    printf("%d,",a[k]);
   
}
 printf("\b]\n");

}

}
    