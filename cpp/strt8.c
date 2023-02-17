//string handle functios

//strcpy()

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char ch[30];
char ch1[30];
printf("enter char 1\n");
gets(ch);
strcpy(ch1,ch);  //strcpy: used to copy one str to ANOTHER..HERE THE STRING YOU WANT TO BE COPIED MUST ENTER FIRST..
puts(ch1);
}