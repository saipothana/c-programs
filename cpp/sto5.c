//registers: tells compiler that var should be kept in machine registes instead in memory;

/*
>these are local
>works within the function
>garbage
>stored in processor
>more privacy

//first we fetch data into register and update in ram --its normal process

//so in registers directly the var kept in registers an d it is fast


//we use to store var which are frequently usre like sum,count i...because reg memory is less in kb

*/
#include<stdio.h>
void main(){
   register int sum=0,i,r=6;
   for(i=0;i<r;i++){
    sum=sum+i;
   }
   printf("%d",sum);
}


//its is not used in pointers because register not have address