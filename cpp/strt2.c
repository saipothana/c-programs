#include<stdio.h>
#include<conio.h>
void main(){
  char ch[]="cprograming";
   int i,j,k, d;
  for(i=0;i<11;i++){
   /* for(j=0;j<i;j++){
        printf("%c",ch[j]);
    }
    printf("\n");*/

    for(j=11;j>=i;j--){
       

       printf("%12.*s",ch);
    }
    printf("\n");
   }
}
   

  
