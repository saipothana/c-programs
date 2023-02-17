//employee details

#include<stdio.h>
#include<conio.h>
struct person{
    char name[40];
    int day;
    char month[10];
    int year;
    float salary;

};
void main(){
    struct person e1,e2;
    printf("enter employee1 details\n");
    printf("enter e1 name\n");
    scanf("%s",&e1.name);
    printf("enter e1 day-month-year\n");
    //fflush(stdin);
    scanf("%d %s %d",&e1.day,&e1.month,&e1.year);
    printf("enter e1 salary\n");
    scanf("%f",&e1.salary);

      printf("enter employee2 details\n");
    printf("enter e2 name\n");
    fflush(stdin);
    scanf("%s",&e2.name);
    printf("enter e2 day-month-year\n");
    fflush(stdin);
    scanf("%d %s %d",&e2.day,&e2.month,&e2.year);
    printf("enter e2 salary\n");
    scanf("%f",&e2.salary);

    printf("the e1 status\n");
    printf("%s\n",e1.name);
    printf("%d-%s-%d\n",e1.day,e1.month,e1.year);
    
    printf("%f\n",e1.salary);

     printf("the e2 status\n");
    printf("%s\n",e2.name);
    printf("%d-%s-%d\n",e2.day,e2.month,e2.year);
    printf("%f\n",e2.salary);

}