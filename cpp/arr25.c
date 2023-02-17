//decimal to binary
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b[100],size=0,i;
    printf("enter a");
    scanf("%d",&a);
    while(a>0){
        b[size++]=a%2;
        a=a/2;
    }
    printf("the binary\n");

    for(i=size-1;i>=0;i--){
        printf("%d\n",b[i]);
    }

}