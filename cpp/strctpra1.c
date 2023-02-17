#include<stdio.h>
struct student{
    char name[10];
    int age;
    int roll;
    float marks;
};
/*
void print(char name[],int age,int roll,float marks){
    int i;
   
    printf("name=%s\n",name);
    printf("age=%d\n",age);
    printf("roll=%d\n",roll);
    printf("marks=%f\n",marks);

    

}
*/
void print(struct student s){
    int i;
   
    printf("name=%s\n",s.name);
    printf("age=%d\n",s.age);
    printf("roll=%d\n",s.roll);
    printf("marks=%f\n",s.marks);
}

void main(){
struct student s1[2];
for(int i=0;i<2;i++){
printf("enter name");
scanf("%s",&s1[i].name);
printf("enter age\n");
scanf("%d",&s1[i].age);
printf("enter roll\n");
scanf("%d",&s1[i].roll);

printf("enter marks\n");
scanf("%f",&s1[i].marks);
}

for(int i=0;i<2;i++){
//print(s1[i].name,s1[i].age,s1[i].roll,s1[i].marks);
print(s1[i]);

}
}


