//display playersname,matchesplayed,runs,100s,50s,avg;

#include<stdio.h>
#include<conio.h>
void main(){
    char name[30];
    int mp;
    long int runs;
    int century;
    int halfcentury;
    float avg;

    printf("enter player name:\n");
    gets(name);
    printf("enter matches played:\n");
    scanf("%d",&mp);

    printf("enter run's scored \n");
    scanf("%ld",&runs);

    printf("enter 100's: scored\n");
    scanf("%d",&century);


    printf("enter 50's scored\n");
     scanf("%d",&halfcentury);

     avg=(float)runs/mp;

printf("=================================================\n");
     printf("PLAYER'SNAME matches runs 100's 50's average\n");
     printf("%s              ",name);
     printf("%d\b\b\b\b\b\b\b\b\b",mp);
     printf("%ld ",runs);
     printf("%d ",century);
     printf("%d ",halfcentury);
     printf("%f ",avg);


     

}