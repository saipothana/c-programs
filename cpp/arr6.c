//find address 
#include<stdio.h>
#include<conio.h>
void main(){
    int i,size;
    int a[size];//user input
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
    printf("enter element %d:\n",i);
    scanf("%d",&a[i]);
    }
   for(i=0;i<size;i++){
    printf("a[%d]=%d  address=%u\n",i,a[i],&a[i]);
   }
    getch();
}