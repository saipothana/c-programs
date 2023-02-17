//struct using functions

#include<stdio.h>
#include<conio.h>

struct student{
    char name[30];
    int roll;
    struct{
        int m1;
        int m2;
        int m3;
        int total;
        float avg;

    }m;
};
float percent(int a,int b,int c);
float percent(int a,int b,int c){
    return (a+b+c)/3.0;
}
void main(){

    struct student s;

    printf("enter name\n");
    scanf("%s",&s.name);

    printf("enter roll\n");
    scanf("%d",&s.roll);

    printf("enter marks\n");
    scanf("%d%d%d",&s.m.m1,&s.m.m2,&s.m.m3);

    s.m.total=s.m.m1+s.m.m2+s.m.m3;

   // s.m.avg=(s.m.total)/3.0;

      printf("name=%s\n",s.name);
printf("roll=%d\n",s.roll);

printf("total=%d\n",s.m.total);


s.m.avg=percent(s.m.m1,s.m.m2,s.m.m3);
printf("avg=%f\n",s.m.avg);
}

