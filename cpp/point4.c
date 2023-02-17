//printing 1d array using user input

#include<stdio.h>
#include<conio.h>
void main(){
    int *p,size,i;
    printf("enter size\n");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter element:%d",i);
        scanf("%d",(p+i));
    }
    for(i=0;i<size;i++){
        printf("*(p+%d)=%d\n",i,*(p+i));
    }
}