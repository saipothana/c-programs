//printing decimals and char at the same time

#include<stdio.h>
#include<conio.h>
void main(){
   char ch;
    char i;

    
for(i=65;i<=122;i++){
    if(i>90&&i<97){
        continue;
    }
    printf("|%d-%c",i,i);
}
printf("|\n");
}


