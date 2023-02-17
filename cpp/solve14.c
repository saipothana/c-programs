
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
char *ch;

ch=(char *)malloc(sizeof(int)*1024);
scanf("%[^\n]s",ch);

int i;
for(i=0;*(ch+i)!='\0';i++){
    if(*(ch+i)==32){
        printf("\n");
    }
    else{
        printf("%c",*(ch+i));
    }
}

}
