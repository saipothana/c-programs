//update an element in string 

#include<stdio.h>

char up(char *s,int *in,char *ch){
    
    int i,j;
    for(i=0;*(s+i)!=0;i++){
        if(i==*in){
            *(s+i)=*(ch);
            break;
        }
    }

    printf("%s",s);

   
}

void main(){
    char s[100];int in;char ch;
    printf("enter in\n");
    scanf("%d",&in);

    printf("enter str\n");
    fflush(stdin);
    gets(s);

    printf("enter cjat\n");
    fflush(stdin);
    scanf("%c",&ch);

    up(s,&in,&ch);
}