//concat of n chars

#include<stdio.h>
#include<conio.h>
void add(char ch[30],char ch1[30],int noc);
void add(char ch[30],char ch1[30],int noc){
    int i,j;
    for(i=0;ch[i]!='\0';i++){
       
    }
    for(j=0;j<noc;j++){
        ch[i++]=ch1[j];
    }
    puts(ch);

}
void main(){
    char ch[30];
printf("enter char\n");
gets(ch);
   char ch1[30];
printf("enter char\n");
gets(ch1);
int noc;
printf("enter noc\n");
scanf("%d",&noc);
add(ch,ch1,noc);
}