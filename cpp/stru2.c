//sructures using pointers--------------for pointers we use -> arrow operator

#include<stdio.h>
#include<conio.h>
struct student{
    int roll;
    char name[30];
    char course[30];
};
void main(){

struct student s1={21,"jeevan","ece"};  //this is the syntax of declaring var
struct student *p;
    printf("the roll id %d\n",s1.roll);//by .operator we can call
    printf("the name is %s\n",s1.name);
    printf("the course is %s\n",s1.course);
//so here we are declaring pointer and acessing our var through pointer
     p=&s1;

   printf("the roll id %d\n",p->roll);
 printf("the name is %s\n",p->name);
    printf("the course is %s\n",p->course);


}