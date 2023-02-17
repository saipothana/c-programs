//pointer inside the strct

#include<stdio.h>
#include<conio.h>
struct student{
    char name[30];
    char *p;
};
void main(){
    char grade='A';
    char *ptr=&grade;
struct student s={"jeevan",ptr};

printf("name=%s\n",s.name);

printf("grade=%c\n",*(s.p));

}