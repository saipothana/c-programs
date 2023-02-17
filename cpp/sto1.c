//storage classes : auto extern register static

/* auto: these are local variables 
      default:garbage
      stored:in ram
      more privacy
      we can use same var names in diff funs

scope:within the function or block not have scope throuout pgm(outside of main)
      */

     //demonstration of auto variables

#include<stdio.h>

     void demo1();
     void demo2();
   void demo1(){
    int a=10;
    printf("%d\n",a); //first
   }
   
   void demo2(){
    int a=30;
demo1();
printf("%d\n",a);//sec

   }

   void main(){
    int a=100;
    demo2();
    printf("%d\n",a);//third
   }