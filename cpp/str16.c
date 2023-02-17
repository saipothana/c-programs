//string user i/p  //here we take only prinf function so we not able to print two strings separted by space so we use alternatives

//^ method %[^\n]s
#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
    int i,j;
printf("enter char\n");
scanf("%[^\n]s",&ch);
printf("%s",ch);
}
