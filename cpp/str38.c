//copy of n characters  ........ enter char:raja  noc:3      the cop of raja is raj

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30],ch2[30];
    int i,noc,j=0;
printf("enter char\n");
gets(ch);
printf("enter noc\n");
scanf("%d",&noc);
printf("the copy of %d chars of %s is ",noc,ch);
for(i=0;ch[i]!='\0';i++);
for(i=0;i<noc;i++){
ch2[i]=ch[i];
}
ch2[i]='\0';
puts(ch2);
}