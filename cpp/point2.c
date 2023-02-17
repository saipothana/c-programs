//print size of datatype,variables,constants
#include<stdio.h>
#include<conio.h>
void main(){
int i;
float j;
double k;
char l;


//size of data types

printf("==================================================\n");
printf("size of int =%d\n",sizeof(int) );
printf("size of float =%d\n",sizeof(float) );
printf("size of double =%d\n",sizeof(double) );
printf("size of char=%d\n",sizeof(char) );
printf("==================================================\n");


//size of variables

printf("==================================================\n");
printf("size of i =%d\n",sizeof(i) );
printf("size of j =%d\n",sizeof(j) );
printf("size of k =%d\n",sizeof(k) );
printf("size of l=%d\n",sizeof(l) );
printf("==================================================\n");


//size of constants


printf("==================================================\n");
printf("size of 10 =%d\n",sizeof(10) );
printf("size of 4.45F =%d\n",sizeof(4.45F) );
printf("size of 4.45678 =%d\n",sizeof(4.45678) );
printf("size of A=%d\n",sizeof((char)'A') );//here we type cat because if we dont type cast then it shows into integer 4bytes so after convert into char it shows 1
printf("==================================================\n");


}