////returning a struct var from a fun

#include<stdio.h>
struct point{
    int x;
    int y;
};
struct point edit(struct point p){
    (p.x)++;
    (p.y)=(p.y)+5;
    return p;
}
void print(struct point p){
    printf("%d %d",(p.x),(p.y));
}
void main(){

struct point p1={30,76};
struct point p2={21,85};
p1=edit(p1);
print(p1);
p2=edit(p2);
print(p2);
}