//copy n char

#include<stdio.h>
#include<conio.h>
void main(){
    char str1[100],str2[100],*p1,*p2;
    int i,j=0,in,*p3;
    printf("enter in\n");
    scanf("%d",&in);
p3=&in;

    p1=&str1[0];
p2=&str2[0];

 printf("enter str\n");
    fflush(stdin);
    gets(p1);


for(i=0;i<=*p3;i++){
    *(p2+j++)=*(p1+i);
}
*(p2+j)='\0';
printf("%s",p2);

}