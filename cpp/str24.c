//copy one string to another

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30],upd[30];
    int i;
    printf("enter str\n");
    scanf("%s",&ch);
    for(i=0;ch[i]!='\0';i++){
        upd[i]=ch[i];
    }
    upd[i]='\0';//here we need to initialize new var to null because string end with null
    
    printf("the copy of %s is %s",ch,upd);
}