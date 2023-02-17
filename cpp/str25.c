//copy one string to another with j

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30],upd[30];
    int i,j=0;
    printf("enter str\n");
    scanf("%s",&ch);
    for(i=0;ch[i]!='\0';i++){
        upd[j++]=ch[i];
    }
    upd[j]='\0';//here we need to initialize new var to null because string end with null
    
    printf("the copy of %s is %s",ch,upd);
}