//reverse a string with another var

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
    int i,j=0;
    printf("enter char\n");
    scanf("%s",&ch);
    for(i=0;ch[i]!='\0';i++){
        j++;
        
    }
printf("the rev of %s is ",ch);

    for(i=j;i>=0;i--){
      printf("%c",ch[i]);  
    }

}