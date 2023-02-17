//revere a substring using functions

#include<stdio.h>
#include<conio.h>
#include<string.h>
char revsub(char ch[30][30],int si[30],int li[30],int noc);

char revsub(char ch[30][30],int si[30],int li[30],int noc){
    int i,j,k,ch1[30][30];
    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++);
        for(j=li[i];j>=si[i];j--){
        printf("%c",ch[i][j]);
    }
}
}


void main(){
char ch[30][30];
    int noc,i,j,si[30],li[30];
    printf("enter noc\n");
    scanf("%d",&noc);
for(i=0;i<noc;i++){
    printf("enter string %d\n",i);
    fflush(stdin);
    scanf("%s",&ch[i]);
    printf("enter si and li\n");
    scanf("%d %d",&si[i],&li[i]);
}
for(i=0;i<noc;i++){
    printf("%s\n",ch[i]);

}
printf("============\n");
revsub(ch,si,li,noc);
}