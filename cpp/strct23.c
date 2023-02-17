//how to pass strt var as an arg

#include<stdio.h>
#include<conio.h>
struct student
{
    /* data */
    int rank;
    char grade;
    float percent;
};
void print(struct student p){
    printf("rank=%d\n",p.rank);
    printf("grade=%c\n",p.grade);
    printf("percent=%f\n",p.percent);
}


void main(){

    struct student s1,s2;

    printf("enter rank\n");
    scanf("%d",&s1.rank);
    printf("enter grade\n");
    fflush(stdin);
    scanf("%c",&s1.grade);
    printf("enter percent\n");
    scanf("%f",&s1.percent);

print(s1);
 printf("enter rank\n");
    scanf("%d",&s2.rank);
    printf("enter grade\n");
    fflush(stdin);
    scanf("%c",&s2.grade);
    printf("enter percent\n");
    scanf("%f",&s2.percent);
    print(s2);





}