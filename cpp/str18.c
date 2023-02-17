//length of a str using len
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    char ch[30];
    int i,len=0;
    
    
        printf("enter string:\n");
        scanf("%s",&ch);
    
    for(i=0;ch[i]!='\0';i++){
      len++;
}
    
    printf(" the length %s is %d",ch,len);
    ch[i]='\0';
}