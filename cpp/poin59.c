//substring, reveser sub,reverse str,pali

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    char **str1,**str2;
    int *si,*ei,noc;
int i,j,k;
for(i=0;i<noc;i++){
*str1=(char *)calloc(sizeof(char),50);
}

si=(int *)calloc(noc,sizeof(int));
si=(int *)calloc(noc,sizeof(int));

for(i=0;i<noc;i++){


    printf("enter str1\n");
    fflush(stdin);
    scanf("%s",*(str1+i));

    printf("enter si and ei\n");
    scanf("%d %d",(si),(ei));
}
/*  substring logic
for(i=0;i<noc;i++){
    for(j=0;*(*(str1+i)+j)!='\0';j++){

    }

    if(*(s+i)<=*(e+i)&&*(s+i)>=0&&*(e+i)>=*(s+i)&&*(e+i)<j){
        for(k=*(s+i);k<=*(e+i);k++){
            printf("%c",*(*(str1+i)+k));
        }

    }
    printf("\n");
}

*/


/* rever substring logic
for(i=0;i<noc;i++){
    for(j=0;*(*(str1+i)+j)!='\0';j++){

    }

    //if(*(s+i)<=*(e+i)&&*(s+i)>=0&&*(e+i)>=*(s+i)&&*(e+i)<j){
        for(k=*(ei+i);k>=*(si+i);k--){
            printf("%c",*(*(str1+i)+k));
        }

    //}
    printf("\n");
}}

*/

//reverse string======================================================================================================
/*
for(i=0;i<noc;i++){
    for(j=0;*(*(str1+i)+j)!='\0';j++){

    }
    while(--j>=0){
printf("%c",*(*(str1+i)+j));
    }
    printf("\n");
}

*/


//palindrome or not===================================================================================================

for(i=0;i<noc;i++){
  k=0;
 for(j=0;*(*(str1+i)+j)!='\0';j++){
while(--j>=0){
    *(*(str2+i)+k++)=*(*(str1+i)+j);
}
    }


}

for(i=0;i<noc;i++){
 
 for(j=0;*(*(str1+i)+j)!='\0';j++){
     if(*(*(str1+i)+j)!=*(*(str2+i)+j)){
break;
        }
    }


if(*(*(str1+i)+j)==*(*(str2+i)+j)){
    printf("%s %s are pali",*(*(str1+i)),*(*(str2+i)));
}
else{

}
printf("%s %s are not pal",*(*(str1+i)),*(*(str2+i)));
}
}
