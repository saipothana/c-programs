// C Program to Calculate Difference Between Two Time Periods


#include<stdio.h>
typedef struct zones{
    int hours;
    int min;
    int sec;
    
}zones;

zones diff(zones n1,zones n2){
zones c;
//printf("hi\n");
c.hours=(n1.hours)-(n2.hours);
//printf("hi\n");
                              
   while (n2.min > n1.min) {
      --n1.hours;
      n1.min += 60;
   }
c.min=(n1.min)-(n2.min);
                               
   while (n2.sec > n1.sec) {
      --n1.min;
      n1.sec += 60;
   }
c.sec=(n1.sec)-(n2.sec);

return c;

}


void main(){

zones a,b;

printf("enter time 1\n");
scanf("%d",&a.hours);
printf("enter\n");
scanf("%d",&a.min);
scanf("%d",&a.sec);


printf("enter time 2\n");
scanf("%d %d %d",&(b.hours),&(b.min),&(b.sec));


zones z=diff(a,b);

printf("%d:%d:%d\n",(z.hours),(z.min),(z.sec));

}