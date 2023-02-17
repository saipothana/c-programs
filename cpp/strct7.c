//wap a program to calculate the subject wise and student wise totals 

#include<stdio.h>
#include<conio.h>
typedef struct marks{
   // char name[30];
    int tel;
    int hin;
    int eng;
    int maths;

}marks;
void main(){
marks student[3]={{45,35,48,50},{49,49,30,27},{20,21,31,18}};

int i,j,telavg=0,hinavg,engavg=0,mathavg=0,avg;

 printf("student \t\t total\n");
for(i=0;i<3;i++){
    avg=0;
   
avg=student[i].tel+student[i].hin+student[i].eng+student[i].maths;
printf("student[%d]\t\t %d\n",i,avg);

}
printf("==================================\n");
printf("Subject\t\t total\n");
for(i=0;i<3;i++){
telavg=telavg+student[i].tel;

hinavg=hinavg+student[i].hin;

engavg=engavg+student[i].eng;
mathavg=mathavg+student[i].maths;

}
printf("student 1 \t\t %d\n",telavg);
printf("student 2 \t\t %d\n",hinavg);
printf("student 3 \t\t %d\n",engavg);
printf("student 4 \t\t %d\n",mathavg);

printf("Grand total = %d\n",(telavg+hinavg+engavg+mathavg));


}