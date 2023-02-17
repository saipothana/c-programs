#include<stdio.h>
#include<conio.h>
float area(int b,int h);
float area(int b,int h){
    return (b*h)/2;
}
void main(){
    int base,hei;
    printf("enter base and hei\n");
    scanf("%d %d",&base,&hei);
printf("the area of rect is %d * %d=%f\n",base,hei,area(base,hei));
}