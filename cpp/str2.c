///printing string with for loop by using if-else

#include<stdio.h>
#include<conio.h>
void main(){
    int i;
     char ch[30]={'s','a','i','\0'};
     for(i=0;i<30;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
        printf("%c",ch[i]);
        }
     }
    // ch[i]!='\0';
}