//find biggest of three nums using c

#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("enter a b c\n");
    scanf("%d %d %d",&a,&b,&c);
   int *p1=&a;
   int *p2=&b;
   int *p3=&c;
    if(*p1>*p2&&*p2>*p3){
        printf("a =%d is big\n",*p1);
    }
    else if(*p2>*p1&&*p1>*p3){
        printf("b=%d big\n",*p2);
    }
    else{
        printf("c=%d big\n",*p3);
    }
}