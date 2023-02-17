//ddst strings in c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
char **str1;
int noc,i,j,k,l;
for(i=0;i<noc;i++){
*str1=(char *)calloc(sizeof(char),50);
}


for(i=0;i<noc;i++){
    printf("enter str\n");
    fflush(stdin);
    scanf("%s",*(str1+i));
}

for(i=0;i<noc;i++){
    for(j=0;*(*(str1+i)+j)!='\0';j++){

    }
    for(j=0;*(*(str1+i)+j)!='\0';j++){
        if(*(*(str1+i)+j)>=65&&*(*(str1+i)+j)<97){
            *(*(str1+i)+j)=*(*(str1+i)+j)+32;

        }
    }

    for(i=0;i<noc;i++){
        printf("%d",*(str1+i));
    }
}

}