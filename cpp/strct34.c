#include<stdio.h>
#include<stdlib.h>
//int n,i;
//printf("enter n\n");
//scanf("%d",&n);
 struct stu{
        char grade;
        int no;
    };

void print(struct stu *p){
    int n;
    printf("enter n\n");
    scanf("%d",&n);
 
  for(int i=0;i<n;i++){
    printf("grade=%c\n",(p+i)->grade);
    printf("no=%d\n",(p+i)->no);
  }
    
}

void main(){

    struct stu *arr;
   int n;
    arr=(struct stu*)malloc(sizeof(struct stu)*n);
   printf("emnter n\n");
scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("enter st %d\n",i);
        fflush(stdin);
        printf("enter grade\n");
        scanf("%c",&(arr+i)->grade);
        printf("enter no\n");
        scanf("%d",&(arr+i)->no);
    }
    print(arr);
   
}