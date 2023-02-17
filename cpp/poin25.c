//pali or not

#include<stdio.h>
#include<conio.h>
void main(){
    char *p1,str[100],str1[100],*p2;
    int i,j,k=0;

    p1=&str[0];

    p2=&str1[0];
     printf("enter str\n");
    fflush(stdin);
    gets(p1);

    for(i=0;*(p1+i)!='\0';i++){

    }
    for(j=i-1;j>=0;j--){
        *(p2+k++)=*(p1+j);
    }
    *(p2+k)='\0';
   for(i=0;*(p1+i)!='\0';i++){
    if(*(p1+i)!=*(p2+i)){
        break;
    }
   } 
  if(*(p2+i)==*(p1+i)){

printf("%s is pal",p1);
  }
  else{
printf("%s not pal",p1);
  }
   
    
}