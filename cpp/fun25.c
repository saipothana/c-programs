//palindrome using functions

#include<stdio.h>
#include<conio.h>
void pali(char ch[30]);
void pali(char ch[30]){
    int i,j,k=0,ch1[30];
    for(i=0;ch[i]!='\0';i++){
//length
    }
  
while(--i>-1){
  ch1[k++]=ch[i]; 
}
ch1[k++]='\0';
printf("the %s and %s are ",ch,ch1);
for(i=0;ch[i]!='\0';i++){
if(ch[i]!=ch1[i]){
   break;
}
}
if(ch[i]==ch1[i]){
 printf(" pali");
}
else{
    printf("not pali");
}
}
void main(){
char ch[30];
printf("enter char\n");
gets(ch);
pali(ch);
}