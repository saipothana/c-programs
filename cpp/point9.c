//upper to lowe using pointers

#include<stdio.h>
#include<conio.h>
void main(){
    char *ch;
    int i;

    printf("enter string");
    scanf("%s",ch);

    for(i=0;*(ch+i)!='\0';i++){
if(*(ch+i)<=122&&*(ch+i)>=97){
    *(ch+i)=*(ch+i)-32;
}
else{
    *(ch+i)=*(ch+i);
}
    }

    puts(ch);
}