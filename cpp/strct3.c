//comparing and copying structure variables

//two variables of same struct types can be copied the same way as ordinary variables. if person1 and person2 belongs to same struct the we can say

//person1=person2

//but we cannot say person1==person2  or person1!=person2  because c not permit logical operations on strusts


#include<stdio.h>
struct class{
    int roll;
    char name[30];
    float marks;
};
void main(){

    int x;
    struct class stu1={3,"jeevan",25};
    struct class stu2={23,"veej",21};
    struct class stu3;
    stu3=stu2;
    x=((stu3.roll==stu2.roll)&&(stu3.marks==stu2.marks))?1:0;

if(x==1){
    printf("stu2 and stu3 are same\n");
    printf("%d %s %f\n",stu3.roll,stu3.name,stu3.marks);
}
else{
    printf("stu2 and 3 are not equal\n");
}

    }

