//
#include<stdio.h>
#include<conio.h>
struct record
{
   int sub1;
   int sub2;
   int sub3;
   int total;
};

void main(){
    struct record st[3];
    int i;
    for(i=0;i<3;i++){
        printf("enter student %d record\n",i);
        printf("enter sub1 marks\n");
        scanf("%d",&st[i].sub1);
        printf("enter sub2 marks\n");
         scanf("%d",&st[i].sub2);
        printf("enter sub2 marks\n");
         scanf("%d",&st[i].sub3);
         printf("completed stu %d\n",i);
    }

    struct record whole;
for(i=0;i<3;i++){
    //calculation of each student total marks
    st[i].total=st[i].sub1+st[i].sub2+st[i].sub3;

    whole.sub1=whole.sub1+st[i].sub1;
     whole.sub2+=st[i].sub2;
      whole.sub3+=st[i].sub3;


}

printf("student\t\t total\n");
for(i=0;i<3;i++){
    printf("student[%d]\t\t %d\n",i,st[i].total);


}


printf("sub \t\t total\n");
printf("sub1  %d\n",whole.sub1);
printf("sub2  %d\n",whole.sub2);
printf("sub3  %d\n",whole.sub3);

}