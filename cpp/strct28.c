//returning a struct var from a function

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct rec{
    int roll;
    int roll1;

};
struct rec *sum(struct rec *p){
struct rec *a=(struct rec*)malloc(sizeof(struct rec)*2);
int i;
for(i=0;i<2;i++){
*(a+i)=((struct rec)(p+i)->roll + (p+i)->roll1);
}
return a;
}
void main(){

    struct rec *s;
    int i;
    for(i=0;i<2;i++){
        printf("enter roll\n");
        scanf("%d",(s+i)->roll);
        printf("enter name\n");
        scanf("%d",(s+i)->roll1);
    }
    int *res=sum(s);
    for(i=0;i<2;i++){
        printf("%d",*(res+i));
    }

    
}