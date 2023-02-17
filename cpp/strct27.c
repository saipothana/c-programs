////returning a pointer to a  struct from a function 

#include<stdio.h>
#include<stdlib.h>
struct point{
    int x;
    int y;
};

struct point *sum(int p,int q){
    struct point *a=(struct point*)malloc(sizeof(struct point));

    a->x=p;
    a->y=q+5;

    return a;
}

void print(struct point *p3){
    printf("%d %d\n",p3->x,p3->y);
}

void main(){
struct point *p1,*p2;

p1=sum(2,3);
p2=sum(4,3);

print(p1);

print(p2);


}