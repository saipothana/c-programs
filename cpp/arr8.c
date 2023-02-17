//sum of elements in an array

#include<stdio.h>
#include<conio.h>
void main(){
    int size,i,sum=0;
    int a[100];
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
printf("enter element %d:\n",i);
scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){    
        sum=sum+a[i];
    }
    printf("the sum of emements is %d",sum);
    getch();
}