//copy dd strings using functions

#include<stdio.h>
#include<conio.h>
char cpy(char ch[30][30],int noc);
char cpy(char ch[30][30],int noc){
int i,j,k;
char ch1[30][30];
for(i=0;i<noc;i++){
    for(j=0;ch[i][j]!='\0';j++){

    }
    for(j=0;ch[i][j]!='\0';j++){
        ch1[i][j]=ch[i][j];
    }
    ch1[i][j]='\0';

    printf("the copy of %s is %s\n",ch[i],ch1[i]);
}
}
void main(){


 char ch[30][30];
    int noc,i,j;
    printf("enter noc\n");
    scanf("%d",&noc);
for(i=0;i<noc;i++){
    printf("enter string %d\n",i);
    fflush(stdin);
    scanf("%s",&ch[i]);
}
for(i=0;i<noc;i++){
    printf("the org :%s\n",ch[i]);

}

cpy(ch,noc);

}