#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30]="Jeevan KUMAR";

    printf("%15s\n",ch);  //%10s used to create 10 spaces before the printing string
printf("%5s\n",ch);
 printf("----------\n");

 printf("%15.2s\n",ch);// ,2 is string used to print upto 2 chars and neglect remaining


 printf("%-15.2s\n",ch); //used to shift left

 printf("%.4s\n",ch);//used to print 4 chars
printf("%s\n",ch);

}
