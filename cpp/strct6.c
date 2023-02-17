//array of structures

//the data of three students must be displayed

#include<stdio.h>
#include<conio.h>
struct record
{
    char name[30];
    int roll;
    char grade;
    float percent;
};

void main(){

struct record student[3];

int i,j;

for(i=0;i<3;i++){
    printf("=============%d========================\n",i);
    printf("enter record of student %d: \n",i);

    printf("enter name of student %d\n ",i);
    scanf("%s",&student[i].name);

    printf("enter roll no of student %d\n ",i);
    scanf("%d",&student[i].roll);

    printf("enter grade of student %d\n ",i);
    fflush(stdin);
    scanf("%c",&student[i].grade);

    printf("enter percentage of student %d\n ",i);
    scanf("%f",&student[i].percent);

  //  scanf("%s %d %c %.2f",&student[i].name,&student[i].roll,&student[i].grade,&student[i].percent);
  printf("===========end of %d=================== \n",i);
}

for(i=0;i<3;i++){
    printf("=============student %d record:===============\n",i);

    printf("student-%d name= %s\n",i,student[i].name);
    printf("student-%d roll=%d\n",i,student[i].roll);
     printf("student-%d grade=%c\n",i,student[i].grade);
     printf("student-%d percentage=%.2f\n",i,student[i].percent);

     printf("==========student %d record is completed======\n",i);
}

}