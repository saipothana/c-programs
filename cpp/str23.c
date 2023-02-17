//init cap---a capital letter in fist 
#include<stdio.h>
#include<conio.h>
void main(){
char ch[30];
int i;
printf("enter string\n");
gets(ch);
printf("initcap %s ",ch);
if(ch[0]>=97&&ch[0]<=122){
    ch[0]=ch[0]-32;
}
for(i=1;ch[i]!='\0';i++){
if(ch[i]>=65&&ch[i]<=90){
    ch[i]=ch[i]+32;
}
else {
    ch[i]=ch[i];
}

}
ch[i]='\0';
printf("is %s",ch);
}