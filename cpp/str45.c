//updeate the element 

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30],ch1;
    int in,i,j=0;

    printf("enter str\n");
    gets(ch);

    printf("enter ch1\n");
    scanf("%c",&ch1);

    printf("enter in \n");
    scanf("%d",&in);

    for(i=0;ch[i]!='\0';i++){
j++;
    }
    for(i=0;ch[i]!='\0';i++){
        if(i==in){
        ch[in]=ch1;
        break;
        }
    }

    puts(ch);


}