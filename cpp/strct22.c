//call by reference

#include<stdio.h>
struct record
{
    /* data */
    int no;
    char name[30];
};

void input(int *no,char *name){
    printf("enter no\n");
    fflush(stdin);
    scanf("%d",no);
    printf("enter name\n");
    fflush(stdin);
    scanf("%s",name);
}

void print(int *no,char *name){
     printf("roll=%d   %d\n",*no);

   
    printf("enter name=%s\n",name);
   
}
void main(){
    struct record s;
input(&s.no,s.name);

print(&s.no,s.name);

}