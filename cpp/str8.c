// print str using putchar 

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30]="ravi";
    int i;
    for(i=0;ch[i]!='\0';i++){
    putchar(ch[i]);
    }
    getch();
}