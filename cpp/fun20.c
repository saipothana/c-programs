//decimal to binary

#include<stdio.h>
#include<conio.h>
int dec(int num){
    int r[100],size=0,i;
    printf("the binary of  %d is\n",num);
    while(num!=0){
        r[size++]=num%2;
        num=num/2;
    }
    for(i=size-1;i>=0;i--){
        printf("%d ",r[i]);
    }

}
void main(){
int num;
printf("enter num\n");
scanf("%d",&num);
dec(num);
}