//returning pointers 
#include<stdio.h>

int *larger(int *a,int *b){
    if(*a>*b){
        return a;
    }
    else{
        return b;
    }
}

void main(){
    int x,y;
    //int (*larger)(int *,int *);
    printf("enter x,y\n");
    scanf("%d %d",&x,&y);

   // int *z=larger(&x,&y);
    printf("%d",*larger(&x,&y));
}