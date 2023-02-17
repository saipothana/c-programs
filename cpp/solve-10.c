#include<stdio.h>
#include<string.h>
void main(){
char str[100];
int i,j,esum=0,osum=0,k=0;

printf("enter str\n");
gets(str);

for(i=0;str[i]!='\0';i++);

while(i>0){


   if(k==0){
    esum+=str[i-1]-48;
    i--;
    k=1;
   } 
   else{
     osum+=str[i-1]-48;
    i--;
    k=0;
   }
}

 if(esum<osum){
        esum=esum+osum;
        osum=esum-osum;
        esum=esum-osum;
       
    }

 printf("%d \t %d\n",esum,osum);    

printf("\n");


    printf("the o/p is %ld",(esum-osum));


}



