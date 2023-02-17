//structures:  it is collection of heterogenous datatypes..it uses struct keyword ..to access struct we use .operator

//syntax:

/*struct struct-name
{
    variables;
};
*/
#include<stdio.h>
#include<conio.h>
struct student{
    int roll;
    char name[30];
    char course[30];
};

void main(){
    struct student s1={21,"jeevan","ece"};  //this is the syntax of declaring var

    printf("the roll id %d\n",s1.roll);//by .operator we can call
    printf("the name is %s\n",s1.name);
     printf("the course is %s\n",s1.course);
}