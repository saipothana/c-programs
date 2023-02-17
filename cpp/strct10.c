//nested struct
#include<stdio.h>
#include<conio.h>
struct student{
    int no;
    char name[30];
    char course[10];
    struct marks{
        int m1;
        int m2;
        int m3;
        int total;
    }m;//variable 1
};

void main(){
struct student info;
printf("enter student information\n");
printf("enter reg No\n");
scanf("%d",&info.no);
printf("enter name\n");
scanf("%s",&info.name);
printf("enter opted course\n");
scanf("%s",&info.course);
printf("enter marks m1\n");
scanf("%d",&info.m.m1);
printf("enter marks m2\n");
scanf("%d",&info.m.m2);
printf("enter marks m3\n");
scanf("%d",&info.m.m3);


info.m.total=info.m.m1+info.m.m2+info.m.m3;

printf("writhe the info of student in a sheet\n");
printf("no=%d\n",info.no);
printf("name=%s\n",info.name);
printf("course=%s\n",info.course);
printf("m1=%d\n m2=%d\n m3=%d\n",info.m.m1,info.m.m2,info.m.m3);

printf("total=%d\n",info.m.total);
float avg=info.m.total/3.0;

printf("avg=%.2f\n",avg);
}