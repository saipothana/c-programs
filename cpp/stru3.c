//structures by taking user input

#include<stdio.h>
#include<conio.h>
struct student{
    int roll;
    char name[30];
    char course[30];
};
void main(){

struct student s1;
printf("enter roll no\n");
scanf("%d",&s1.roll);
printf("enter name\n");
scanf("%s",&s1.name);
printf("enter course\n");
scanf("%s",&s1.course);

printf("the roll id %d\n",s1.roll);//by .operator we can call
    printf("the name is %s\n",s1.name);
    printf("the course is %s\n",s1.course);

}