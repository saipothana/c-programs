//runtime struct pointer



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

    struct employee id;
    struct employee *p=&id;
 
    printf("Enter name\n");
    scanf("%s",(p)->name);
    printf("enter roll\n");
    scanf("%d",&(p)->roll);
    printf("enter char\n");
    fflush(stdin);
    scanf("%c",&(p)->band);
      printf("enter salary\n");
    scanf("%f",&(p)->salary);

    
  

    printf("Name=%s\n",p->name);
     printf("roll=%d\n",p->roll);
     printf("Name=%c\n",p->band);
       printf("salary=%.2f\n",p->salary);



}