//find  address  of float ,double ,long
#include<stdio.h>
#include<conio.h>
void main(){
    int i,size;
    //float a[size];//user input
    //double a[size];
    long a[size];
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
    printf("enter element %d:\n",i);
    //scanf("%f",&a[i]);
    scanf("%ld",&a[i]);
    }
   for(i=0;i<size;i++){
    printf("a[%d]=%ld  address=%u\n",i,a[i],&a[i]);
   }
    getch();
}