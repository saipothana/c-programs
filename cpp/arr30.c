//delete an element

// 1 2 3 4 5 ---------------start from in
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size,in,i;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter array: %d",i);
        scanf("%d",&a[i]);

    }
    printf("before deletion\n");
    for(i=0;i<size;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("enter index");
    scanf("%d",&in);
    for(i=in;i<size;i++){
        a[i]=a[i+1];
    }
printf("after deletion\n");
    for(i=0;i<size-1;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    getch();         
}