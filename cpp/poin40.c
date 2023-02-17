//application of function pointer
#include<stdio.h>

void add(int a,int b){
    printf("%d + %d=%d\n",a,b,(a+b));
}

void sub(int a,int b){
    printf("%d - %d=%d\n",a,b,(a-b));
}
void mul(int a,int b){
    printf("%d * %d=%d\n",a,b,(a*b));
}
void div(int a,int b){
    printf("%d / %d=%d\n",a,b,(a/b));
}
void mod(int a,int b){
    printf("%d %% %d=%d\n",a,b,(a%b));
}

void main(){
    int ch,a,b;

    void (*ptr[10])(int,int)={add,sub,mul,div,mod};
    printf("enter choice\n");
    scanf("%d",&ch);
    printf("enter a and b\n");
    scanf("%d %d",&a,&b);
    (*ptr[ch])(a,b);        //here istead of swith case im using function pointer   *(ptr(0))---goes to add we pass the a b values here
}
