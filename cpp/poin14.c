//binary to decimal

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int *p,a[100],i,size,dec=0,j=0;
    p=&a[0];
    printf("enter size\n");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter elemnt %d\n",i);
        scanf("%d",p+i);
    }
    
    for(i=size-1;i>=0;i--){
        printf("the decimal of *(p+%d)=%d ",j,*(p+j) );
       dec=dec+a[i]*pow(2,j++); 
    }
    printf(" is %d",dec);
}