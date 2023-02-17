//self referential structures

#include<stdio.h>

struct code{
int a;
char ch;
struct code *p;
};

void main(){
    struct code var1;
    struct code var2;
    var1.a=5;
    var1.ch='A';
    var1.p=NULL;

     var2.a=6;
    var2.ch='b';
    var2.p=NULL;

    var1.p=&var2;
    printf("%d %C",var1.p->a,var1.p->ch);

    

}