//reverse a string using while without another var

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
    int i;
    printf("enter char\n");
    scanf("%s",&ch);
    for(i=0;ch[i]!='\0';i++){
       
        
    }
printf("the rev of %s is ",ch);

   while(i-->0){
putchar(ch[i]);
   }

}