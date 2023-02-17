//delete dublicates

#include<stdio.h>
#include<conio.h>

void main(){
    char *p1,str[100];
    int i,j,k,p;

     p1=&str[0];

   
     printf("enter str\n");
    fflush(stdin);
    gets(p1);


    for(i=0;*(p1+i)!='\0';i++);


    for(j=0;*(p1+j)!='\0';j++){
        for(k=j+1;*(p1+k)!='\0';k++){
            if(*(p1+j)==*(p1+k)){
                for(p=j;*(p1+p)!='\0';p++){
                    *(p1+p)=*(p1+p+1);
                }
                k--;
            }
        }
    }

   printf("%s",p1);
}