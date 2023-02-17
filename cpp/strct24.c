//

//how to pass strt var as an arg

#include<stdio.h>
#include<conio.h>
struct student
{
    /* data */
    int rank;
    char grade;
    float percent;
};
void print(struct student p[2]){
    int i;
    for(i=0;i<2;i++){
    printf("rank=%d\n",p[i].rank);
    printf("grade=%c\n",p[i].grade);
    printf("percent=%f\n",p[i].percent);
    }
}


void main(){

    struct student s[2];
int i;
for(i=0;i<2;i++){
    printf("enter rank\n");
    scanf("%d",&s[i].rank);
    printf("enter grade\n");
    fflush(stdin);
    scanf("%c",&s[i].grade);
    printf("enter percent\n");
    scanf("%f",&s[i].percent);
}

print(s);


 /*
 printf("enter rank\n");
    scanf("%d",&s2.rank);
    printf("enter grade\n");
    fflush(stdin);
    scanf("%c",&s2.grade);
    printf("enter percent\n");
    scanf("%f",&s2.percent);
    print(s2);
*/




}