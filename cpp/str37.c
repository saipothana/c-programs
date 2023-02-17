//check given str is palindrome or not
#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30],ch2[30];
    int i,j=0;
    printf("enter char\n");
    gets(ch);
    for(i=0;ch[i]!='\0';i++){
//length
    }
  
while(--i>-1){
  ch2[j++]=ch[i]; 
}
ch2[j]='\0';
printf("the %s and %s are ",ch,ch2);
for(i=0;ch[i]!='\0';i++){
if(ch[i]!=ch2[i]){
   break;
}
}
if(ch[i]==ch2[i]){
 printf(" pali");
}
else{
    printf("not pali");
}

}
