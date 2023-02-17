//insert if we want to put lin=ke in 2 enter 33

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size,in,i,num;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter array: %d",i);
        scanf("%d",&a[i]);

    }
    printf("after insertiom0");
    for(i=0;i<size;i++){
        printf("a[%d]=%d\n",i+1,a[i]);
    }
    printf("enter index");
    scanf("%d",&in);
    printf("enter number");
    scanf("%d",&num);

    for(i=size-1;i>=in-1;i--){
        a[i+1]=a[i];
    }
    a[in-1]=num;
printf("after insertiom0");
    for(i=0;i<=size;i++){
        printf("a[%d]=%d\n",i+1,a[i]);
    }
    getch();         
}