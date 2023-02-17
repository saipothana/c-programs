//substring check  

//only starting index

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    char ch[30];
    int noc,i,in;
   
  
   

   printf("enter string");
   gets(ch);

     printf("enter in ");
    scanf("%d",&in);

    for(i=0;ch[i]!='\0';i++);
        printf("the sub for %s is",ch);
   
        if(in>=0&&in<i){
            
for(i=in;ch[i]!='\0';i++){
    putchar(ch[i]);
}
        }

        else{
            printf("no sub");
        }
    
}