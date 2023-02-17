//accesing 2d strings using pointer as args

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void input(char **str1,int noc);
void print(char **str1,int noc);
void co(char **str1,char **str2,char **st3,int noc);

void input(char **str1,int noc){
    int i,j=0,k;

    for(i=0;i<noc;i++){
        printf("enter string %d",j++);
        fflush(stdin);
       gets(*(str1+i));
        
    }


}

void print(char **str1,int noc){
    int i=0;
    for(i=0;i<noc;i++){
        printf("%s\n",*(str1+i));
    }
}

void con(char **str1,char **str2,char **str3,int noc){
    int i,j,k;

    for(i=0;i<noc;i++){
        k=0;
        for(j=0;*(*(str1+i)+j)!=0;j++){
          *(*(str3+i)+k++)=*(*(str1+i)+j);
        }

        for(j=0;*(*(str2+i)+j)!=0;j++){
          *(*(str3+i)+k++)=*(*(str2+i)+j);
        }

        *(*(str3+i)+k)='\0';
      // printf("%s\n",*(str3+i));
}

}
void main(){
    char **str1,**str2,**str3;
    int noc,i,j,k;
    printf("enter noc\n");
    scanf("%d",&noc);
   str1=(char **)malloc(sizeof(char *)*noc);
    for(i=0;i<noc;i++){
        *(str1+i)=(char *)malloc(sizeof(char)*50);
    }

   str2=(char **)malloc(sizeof(char *)*noc);
    for(i=0;i<noc;i++){
        *(str2+i)=(char *)malloc(sizeof(char)*50);
    }

   
    str3=(char **)malloc(sizeof(char *)*noc);
    for(i=0;i<noc;i++){
        *(str3+i)=(char *)malloc(sizeof(char)*50);
    }

    printf("enter str1 1\n");
    input(str1,noc);
    print(str1,noc);

    printf("enter str2 \n");

      input(str2,noc);
    print(str2,noc);

    printf("concat the strings\n");
    con(str1,str2,str3,noc);
    print(str3,noc);
}