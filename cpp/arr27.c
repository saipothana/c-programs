//bin to dec
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int b[100],size,i,j=0,res=0,k=size-1;;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter array: %d\n",i);
        scanf("%d",&b[i]);
    }
    for(i=size-1;i>=0;i--){
   for(j=i;j<=i;j++){
    res=res+b[i]*(2*k--);
   }

    }
    printf("%d",res);
}