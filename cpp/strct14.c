//pointer structure

#include<stdio.h>
#include<conio.h>
struct employee
{
    /* data */
    char name[100];
    int roll;
   char band;
    float salary;
};

void main(){

    struct employee id={"jeevan",3,'A',23000};
    struct employee *p;
 /*
    printf("Enter name\n");
    scanf("%s",&(id).name);
    printf("enter roll\n");
    scanf("%d",&(id).roll);
    printf("enter char\n");
    fflush(stdin);
    scanf("%c",&(id).band);
      printf("enter salary\n");
    scanf("%f",(*p).salary);

    */

       p=&id;
  

    printf("Name=%s\n",p->name);
     printf("roll=%d\n",p->roll);
     printf("Name=%c\n",p->band);
       printf("salary=%.2f\n",p->salary);



}