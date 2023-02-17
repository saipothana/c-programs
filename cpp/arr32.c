//update element-------1 2 3 4 5 ------------at index 4 i want to insert 100 

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
    printf("before updation\n");
    for(i=0;i<size;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("enter index");
    scanf("%d",&in);
    printf("enter number");
    scanf("%d",&num);
for(i=in;i<size;i++){
    a[in]=num;
    break;
}

printf("after updation\n");
    for(i=0;i<size;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }



getch();
}