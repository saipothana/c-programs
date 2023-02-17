//substring two indexes

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    char ch[30];
    int noc,i,in1,in2;
   
  
   

   printf("enter string");
   gets(ch);

     printf("enter in1 ");
    scanf("%d",&in1);
    printf("enter in2 ");
    scanf("%d",&in2);

    for(i=0;ch[i]!='\0';i++);
        
   
        if(in1>=0&&in2>=in1&&in2<i&&in1<=in2){
 printf("the sub for %s is ",ch);           
for(i=in1;i<in2;i++){
    putchar(ch[i]);
}
        }

        else{
            printf("no sub");
        }
    
}