//avg marks using structures


#include<stdio.h>
#include<conio.h>


struct student{
    char name[30];
    int roll;
    int m1;
    int m2;
    int m3;
    float total;

};
void main(){

    struct student s;

    printf("enter name\n");
    scanf("%s",&s.name);

    printf("enter roll\n");
    scanf("%d",&s.roll);
    printf("marks of 3 subjects\n");
    scanf("%d%d%d",&s.m1,&s.m2,&s.m3);

printf("name=%s\n",s.name);
printf("roll=%d\n",s.roll);
printf("m1 m2 m3=%d %d %d\n",s.m1,s.m2,s.m3);
printf("total=%f",(s.m1+s.m2+s.m3)/3.0);

}