//structures using typedef --------it used to create our own data type

#include<stdio.h>
#include<conio.h>

typedef struct student{
    int roll;
    char name[30];
    float fee; 
}sp;
void main(){
sp s;//here sp became the datatype s is var

printf("enter roll no\n");
scanf("%d",&s.roll);
printf("enter name\n");
scanf("%s",&s.name);
printf("enter fee\n");
scanf("%f",&s.fee);

printf("the roll id %d\n",s.roll);//by .operator we can call
    printf("the name is %s\n",s.name);
    printf("the course is %f\n",s.fee);

}

