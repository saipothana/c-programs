//adding

#include<stdio.h>
int add(int a);
int add(int a){
    return a+10;
}

void main(){
    int a;
    printf("enter z\n");
    scanf("%d",&a);

    int (*p)(int)=&add;
    int c=(*p)(a);
printf("%d",c);
}