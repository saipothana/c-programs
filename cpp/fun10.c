//print ascii value of the corresponding char

#include<stdio.h>
#include<conio.h>
char asci(char ch){

    return ch;
}
void main(){
 char ca;
 printf("enter char\n");
 scanf("%c",&ca);

 printf("the ascii of %c is %d",ca,asci(ca));   
}