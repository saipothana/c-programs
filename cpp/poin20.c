//left rotate  multi times using pointer

#include<stdio.h>
#include<conio.h>
void main(){
    int *p,a[100],size,r,n,i,j,k;
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter size\n");
    scanf("%d",&size);

    p=&a[0];
    for(i=0;i<size;i++){
        printf("enter ele %d:\n",i);
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++){
        r=*(p+0);
        for(j=0;j<size;j++){
            *(p+j)=*(p+j+1);
        }
        *(p+size-1)=r;

        for(k=0;k<size;k++){
            printf("%d",*(p+k));
        }
        printf("\n");
   }
}