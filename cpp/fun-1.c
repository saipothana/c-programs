//functions 

//type-1 function :no arguments and no return types 

//wap to using ,ultiple function s that perform different operationds

#include<stdio.h>
#include<conio.h>
void printline(void); //we can use void or not

void printline(void){

    for(int i=1;i<=49;i++){
        printf("-");
        
        
    }
    printf("\n");
}

void tally(void){
    float principal,sum;
    printf("principal Amount?\t\t\t:");
    scanf("%f",&principal);                     //5000 per year 0.12 i---- 5years ?   0.12*5

    float intrest;
    printf("intrest?\t\t\t:");
    scanf("%f",&intrest);
    int period;
    printf("period?\t\t\t:");
    scanf("%d",&period);
    float total;
    int year=1;
sum=principal;
while(year<=period){
sum=sum*(1+intrest);
year=year+1;

}
printf("%8.2f %3.2f %5d %8.2f\n",principal,intrest,period,sum);
    
  
}

void main(){

    printline();
    
    tally();
   
    printline();

}