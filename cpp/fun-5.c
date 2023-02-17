//args with return type

//type -3  //direct returning

//in functions we are just copying variables so here in the given example the formal para names are different from actual but it not effects code

#include<stdio.h>
#include<conio.h>
void printline(char ch,int len);
void printline(char ch,int len){
for(int i=1;i<=len;i++){
printf("%c",ch);
}
printf("\n");
}
float tally(float principal,int period,float intrest);
float tally(float principal,int period,float intrest){//formal para
float sum=principal;

for(int i=1;i<=period;i++){
sum=sum*(1+intrest);

}
//printf("%8.2f %3.2f %10d %7.2f\n",principal,intrest,period,sum);
return sum;
}


void main(){



  float p;
    printf("principal Amount?\t\t\t:");
    scanf("%f",&p);                     //5000 per year 0.12 i---- 5years ?   0.12*5

    float i;
    printf("intrest?\t\t\t:");
    scanf("%f",&i);
    int pe;
    printf("period?\t\t\t:");
    scanf("%d",&pe);

int len;
printf("enter len\n");
scanf("%d",&len);
//float amount=tally(principle,period,intrest);  //so here im storing the return value of the method tally in amount
//tally(principal,period,intrest);

printline('*',len);
printf("%8.2f %3.2f %10d %7.2f\n",p,i,pe,tally(p,pe,i)); //so here im returning values directly without using any variable
 printline('=',len);  
}