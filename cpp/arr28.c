//insert element into array

//   1 2 3 4 5----------1 2     4 5-----move to size+1 index

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
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("enter index");
    scanf("%d",&in);
    printf("enter number");
    scanf("%d",&num);

    for(i=size-1;i>=in;i--){
        a[i+1]=a[i];
    }
    a[in]=num;
printf("after insertiom0");
    for(i=0;i<=size;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    getch();         
}