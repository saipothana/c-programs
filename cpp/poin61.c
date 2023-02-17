//insert del deldup

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){

    char **str1,char *ch;
    int noc,*in,i,j,k,l;

    for(i=0;i<noc;i++){
*str1=(char *)calloc(sizeof(char),50);
}

ch=(char *)malloc(sizeof(char),noc);
in=(int *)malloc(sizeof(int),noc);


for(i=0;i<noc;i++){
    printf("enter str1\n");
    fflush(stdin);
    scanf("%s",*(str1+i));

     printf("enter char\n");
    fflush(stdin);
    scanf("%c",*(ch+i));

printf("enter in\n");
scanf("%d",(in+i));
}

/* insert logic         
for(i=0;i<noc;i++){
    for(j=0;*(*(str1+i)+j)!='\0';j++){

    }
    for(k=j-1;k>=*(in+i);k--){
        *(*(str1+i)+j+1)=*(*(str1+i)+j);
    }

    *(*(str1+i)+*(in+i))=*(ch+i);

}
for(i=0;i<noc;i++){
printf("%s\n",*(str1+i));
}
}

*/


//=================delete logic
/*

for(i=0;i<noc;i++){
    for(j=0;*(*(str1+i)+j)!='\0';j++){

    }
    for(k=*(in+i);*(*(str1+i)+j)!='\0';k--){
        *(*(str1+i)+j)=*(*(str1+i)+j+1);
    }

printf("%s\n",*(str1+i));

}

*/

//=====================delete dublicates logic


for(i=0;i<noc;i++){
    for(j=0;*(*(str1+i)+j)!='\0';j++){

    for(k=j+1;*(*(str1+i)+k)!='\0';k++){
if(*(*(str1+i)+j))==*(*(str1+i)+k){
    for(p=j;*(*(str1+i)+p)!='\0';p++){
         *(*(str1+i)+p)=*(*(str1+i)+p+1);
    }

    p--;
    k--;
}
    }
}

printf("%s\n",*(a+i));
}
}
