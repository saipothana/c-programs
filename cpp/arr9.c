//sum of elements oprtimization 
#include<stdio.h>
#include<conio.h>
void main(){
    int size,i,s=0;
    int a[100];
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
printf("enter element %d:\n",i);
scanf("%d",&a[i]);
s=s+a[i];//in user i/p itself we are optimizing
    }
   
    printf("the sum of emements is %d",s);
    getch();
}