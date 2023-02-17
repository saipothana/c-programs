//uppercase--lowercase to upper case

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
    int i,k;
    printf("enter string\n");
    scanf("%s",&ch);
    printf("the case of %s ",ch);
    for(i=0;ch[i]!='\0';i++);
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]>90&&ch[i]<=122){
            ch[i]=ch[i]-32;
        }
        else{
            ch[i]=ch[i];
        }
    }
    
    ch[i]='\0';
    printf(" is %s",ch);
}