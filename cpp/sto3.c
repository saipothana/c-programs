//extern is used in functions also and it is to link two files

#include<stdio.h>
#include "sto4.c"

 extern void fun();  //here im taking fun from another file and im using the var in another file
 int x=10;//in this case the x must me only global var
void main(){
     fun();
}