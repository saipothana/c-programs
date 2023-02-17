//structures using functions

#include<stdio.h>
#include<conio.h>

struct record
{
    int no;
    char name[30];
    char grade;
};

void print(int no,char name[30],char grade){
    int i;
    for(i=0;i<3;i++){
        printf("stu %d details\n",i);
        printf("no=%d\n",no);
        printf("name=%s\n",name);
        printf("grade=%c\n",grade);
        printf("=======================\n");
    }
}

void main(){
struct record s[3];
int i;
for(i=0;i<3;i++){
    printf("enter stu %d\n",i+1);
    printf("enter no\n");
    scanf("%d",&s[i].no);
    printf("enter name\n");
    scanf("%s",&s[i].name);
    printf("enter grade\n");
    fflush(stdin);
    scanf("%c",&s[i].grade);

    printf("+========================================\n\n");


}

print(s.no,s.name,s.grade);


}