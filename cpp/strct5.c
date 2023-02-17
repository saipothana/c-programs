//typedef  example ----it is used to create a short names 
#include<stdio.h>

typedef struct date
{
    int day;
    
    char month[10];
    int year;
}date;

void main(){
    date d1;
    printf("enter day month year\n");
    scanf("%d %s %d",&d1.day,&d1.month,&d1.year);
       

   printf("%d-%s-%d\n",d1.day,d1.month,d1.year);

    
}
