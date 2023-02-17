//
#include<stdio.h>
#include<conio.h>
struct marks{
    int sub[3];
};

void main(){
struct marks stu[3];
int i,j;
for(i=0;i<3;i++){
    printf("enter student %d marks\n",i);
    for(j=0;j<3;j++){
    printf("enter subject %d marks\n",j);
    scanf("%d",&stu[i].sub[j]);

    }
printf("end of stu %d\n",i);
}
printf("student\t\t total\n");

int avg;
for(i=0;i<3;i++){
    avg=0;
    for(j=0;j<3;j++){
        avg=avg+stu[i].sub[j];
    }
    printf("student[%d]\t\t %d\n",i,avg);
    
}
printf("subject\t\t total\n");
int s1=0,total=0;
for(i=0;i<3;i++){
    s1=0;
    for(j=0;j<3;j++){
s1=s1+stu[j].sub[i];
total=total+stu[j].sub[i];
    }
    printf("sub[%d]\t\t %d\n",i,s1);
}

printf("%d\n",total);

}