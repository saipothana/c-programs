//transpose 

//scalar

//lower trian'

//idempodent

//max-min in colwise

//sort col

//del dup

//right rot in matrix

//concat str

//substring 

//copy n char

//pali or not 

//delete dubli


//wap to concat two strings

#include<stdio.h>
#include<conio.h>
void main(){
    char *p1,*p2; 
    int i,j;
    char str[100],str1[100];
    p1=&str[0];
    p2=&str1[0];

    printf("enter str\n");
    gets(p1);

     printf("enter str1\n");
    gets(p2);


    for(i=0;*(p1+i)!='\0';i++);
   
    for(j=0;*(p2+j)!='\0';j++){
        *(p1+i++)=*(p2+j);
    }

    printf("%s",p1);


}
