//passing pointers to strct as args

//passing struct  var reference  as args

#include<stdio.h>

struct notes
{
    /* data */
    int pages;
    char color[30];
    float cost;
};

void print(struct notes *n){
    int i;
    for(i=0;i<2;i++){
      printf("pages=%d\n",(n+i)->pages);
      printf("color=%s\n",(n+i)->color);
      printf("cost=%f\n",(n+i)->cost);  
    }
}

void main(){
    int i;
    struct notes s[2];
    for(i=0;i<2;i++){
        printf("enter pages\n");
        scanf("%d",&s[i].pages);
        printf("enter color\n");
        scanf("%s",&s[i].color);
        printf("cost\n");
        scanf("%f",&s[i].cost);
    }
    print(s);


}