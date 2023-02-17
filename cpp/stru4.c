//structures by taking user input using pointers

#include<stdio.h>
#include<conio.h>
struct student{
    int roll;
    char name[30];
    char course[30];
};
void main(){

struct student p;
struct student *s;
s=&p;
printf("enter roll no\n");
scanf("%d",&s->roll);
printf("enter name\n");
scanf("%s",s->name);
printf("enter course\n");
scanf("%s",s->course);

printf("the roll id %d\n",s->roll);//by .operator we can call
    printf("the name is %s\n",s->name);
    printf("the course is %s\n",s->course);

}