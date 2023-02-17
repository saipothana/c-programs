#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    int a[5];//user input
    for(i=0;i<5;i++){
    printf("enter element %d:\n",i);
    scanf("%d",&a[i]);
    }
   for(i=0;i<5;i++){
    printf("a[%d]=%d\n",i,a[i]);
   }
    getch();
}