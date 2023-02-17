//delete element in arr .............same like insert elemnt into array    

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
    int in,i,j=0;

    printf("enter str\n");
    gets(ch);

    
    printf("enter in \n");
    scanf("%d",&in);

    for(i=0;ch[i]!='\0';i++){
j++;
    }

    for(i=in;i<j;i++){
        ch[i]=ch[i+1];
    }
    //j--;



   for(i=0;i<j;i++){
        putchar(ch[i]);
    }

    //or
    
   //puts(ch);
}