//compare two str ignore case

#include<stdio.h>
#include<conio.h>
void main(){
    char *p1,*p2,str1[100],str2[100];
    int i,j,k;

    p1=&str1[0];
    p2=&str2[0];

   
     printf("enter str\n");
    fflush(stdin);
    gets(p1);

  printf("enter str2\n");
    fflush(stdin);
    gets(p2);


    for(i=0;*(p1+i)!='\0';i++){
        if(*(p1+i)!=*(p2+i)){
            break;
        }
    }

    if(*(p1+i)==*(p2+i)){
        printf("equ\n");
    }
    else{
        printf("not\n");
    }


}