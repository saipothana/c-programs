//type-2

//function with parametres but not having return type

//if actual para >for para then actual args are discarded

//vice versa then unmatched formal args assigned with garbage

#include<stdio.h>
#include<conio.h>
void printline(char ch);
void printline(char ch){
for(int i=1;i<49;i++){
printf("%c",ch);
}
printf("\n");
}
void tally(float principal,int period,float intrest);
void tally(float principal,int period,float intrest){//formal para
float sum=principal;

for(int i=1;i<=period;i++){
sum=sum*(1+intrest);

}
printf("%8.2f %3.2f %10d %7.2f\n",principal,intrest,period,sum);
}


void main(){



  float principal;
    printf("principal Amount?\t\t\t:");
    scanf("%f",&principal);                     //5000 per year 0.12 i---- 5years ?   0.12*5

    float intrest;
    printf("intrest?\t\t\t:");
    scanf("%f",&intrest);
    int period;
    printf("period?\t\t\t:");
    scanf("%d",&period);


    printline('Z');
    tally(principal,period,intrest);
    printline('C');

}