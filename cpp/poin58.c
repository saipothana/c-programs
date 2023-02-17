//concat two str  and compare two str

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
char **str1,**str2,**str3;
int noc,i,j,k,l;
printf("enter noc\n");
scanf("%d",&noc);
for(i=0;i<noc;i++){
*(str1+i)=(char *)calloc(sizeof(char),50);
}


for(i=0;i<noc;i++){
    printf("enter str1\n");
    fflush(stdin);
    scanf("%s",*(str1+i));

  printf("enter str2\n");
    fflush(stdin);
    scanf("%s",*(str2+i));



}

/* logic for concta
for(i=0;i<noc;i++){
    k=0;
    for(j=0;*(*(str1+i)+j)!='\0';j++){
*(*(str3+i)+k++)=*(*(str1+i+j));
    }

     for(j=0;*(*(str1+i)+j)!='\0';j++){
*(*(str3+i)+k++)=*(*(str1+i)+j);
    }
    
printf("%s\n",*(str3+i));

}
*/

/* logic for concat

for(i=0;i<noc;i++){
    for(j=0;*(*(str1+i)+j)!='\0';j++){

    }
    for(k=0;*(*(str1+i)+j)!+'\0';j++){
        *(*(str1+i)+j++)=*(*(str1+i)+j);
    }

    printf("%s\n",*(str1+i));
}
}
*/

//logic for compare ***************************************************************************************

for(i=0;i<noc;i++){
    for(j=0;*(*(str1+i)+j)!='\0';j++){
        if(*(*(str1+i)+j)!=*(*(str2+i)+j)){
break;
        }
    }


if(*(*(str1+i)+j)==*(*(str2+i)+j)){
    printf("%s %s are eq",*(*(str1+i)),*(*(str2+i)));
}
else{

}
printf("%s %s are not eq",*(*(str1+i)),*(*(str2+i)));
}
}
