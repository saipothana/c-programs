//substrings

#include<stdio.h>
#include<conio.h>
void main(){
    char *p,str[100];
    int in1,in2,i,j;
    p=&str[0];
int *p1,*p2;

 printf("enter in1\n");
    scanf("%d",&in1);

    printf("enter in2\n");
    scanf("%d",&in2);
p1=&in1;
p2=&in2;
    

    printf("enter str\n");
    fflush(stdin);
    gets(p);

    for(i=0;*(p+i)!='\0';i++);
        for(j=*p1;j<=*p2;j++){
            printf("%c",*(p+j));
        }
    
}