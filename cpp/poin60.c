//copy, n comp n with ignore case,concat n

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
char **str1,**str2,**str3;
int noc,i,j,k,l,*in;
for(i=0;i<noc;i++){
*str1=(char *)calloc(sizeof(char),50);
}

in=(int *)malloc(sizeof(int),noc);



for(i=0;i<noc;i++){
    printf("enter str1\n");
    fflush(stdin);
    scanf("%s",*(str1+i));

     printf("enter str1\n");
    fflush(stdin);
    scanf("%s",*(str2+i));

printf("enter in\n");
scanf("%d",(in+i));
}

/* copy of n logic

for(i=0;i<noc;i++){
    for(j=0;j<=*(in+i);j++){
        *(*(str2+i)+j)=*(*(str1+i)+j);
    }

    printf("%s\n",*(str2+i));
}
*/

//============compare of n logic====================================================

/*
for(i=0;i<noc;i++){
    for(j=0;j<=*(in+i);j++){
        if(*(*str2+i)+j!=*(str1+i)+j){
            break;
        }
    }

    if(*(*str2+i)+j==*(str1+i)+j){
        printf("eq\n");
}
else{
    printf("not\n");
}

}
*/

//===========concat n chars====================================

for(i=0;i<noc;i++){
    k=0;
    for(j=0;*(*(str1+i)+j)!='\0';j++){

    }

    for(j=0;*(*(str1+i)+j)!='\0';j++){
        *(*(str3+i)+k++)=*(*(str1+i)+j);
    }

    for(j=0;j<=*(in+i);j++){
        *(*(str3+i)+k++)=*(*str2+i+j);
    }

    printf("%s\n",*(str3+i));

}


}