//nested structures ........declaring struc inside struc

//enormus nested in this for inside struct we not require name
#include<stdio.h>
#include<conio.h>
struct student{
    char name[30];
    int roll;

    struct {  //struct marks----here marks is removedd
        int m1;
        int m2;
        int m3;
        int total;
    }m;  //in nested structures we have to take the variables inside outer struct
};

void main(){
    struct student s;

    printf("enter name\n");
    scanf("%s",&s.name);

    printf("enter roll\n");
    scanf("%d",&s.roll);

    printf("enter marks\n");
    scanf("%d%d%d",&s.m.m1,&s.m.m2,&s.m.m3);
    s.m.total=s.m.m1+s.m.m2+s.m.m3;

    printf("name=%s\n",s.name);
printf("roll=%d\n",s.roll);

printf("total=%d\n",s.m.total);

printf("avg=%f\n",s.m.total/3.0);

}
