//printting string

#include<stdio.h>
#include<conio.h>
void main(){
    int i;
     char ch[30]={'s','a','i','\0'};
     for(i=0;i<30;i++){
       if(ch[i]!='\0'){
        printf("%c",ch[i]);
        }
     }
     ch[i]='\0';//  every string ends with a null so thats why we put char==null
     
    
}