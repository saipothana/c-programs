//length of a char str

#include<stdio.h>
void main(){
    char *p,ch[100];
    int i,j,k;

    p=&ch[0];

printf("enter str\n");
scanf("%s",(p));
    for(i=0;*(p+i)!='\0';i++){
    printf("%c is stored in %u\n",*(p+i),&ch[i]);    
    }
   printf("%d",i); 
}