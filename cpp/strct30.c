

//C Program to Add Two Complex Numbers by Passing Structure to a Function

#include<stdio.h>
struct complex
{
    /* data */
    float a;
    float b;
};

void  add(float a,float b){
  printf("%f %f",a,b);  
}
void main(){

struct complex p1,p2;
printf("enter p1");
printf("enter a\n");
scanf("%f %f",&p1.a,&p1.b);

printf("enter b\n");
scanf("%f %f",&p2.a,&p2.b);
add(p1.a,p1.b);

add(p2.a,p2.b);

float c=p1.a+p2.a;
float d=p2.b+p1.b;

printf("%.2f + i %.2f\n",c,d);
}