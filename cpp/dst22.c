//copy of n char   raja noc =3  the copy of raja is raj


#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30][30];
    int noc,i,j,k,n[30];

    printf("enter noc\n");
    scanf("%d",&noc);
    for(i=0;i<noc;i++){
        printf("enter str %d\n",i);
        fflush(stdin);
        scanf("%s",ch[i]);
        printf("enter n\n");
        scanf("%d",&n[i]);
    }

    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++);
printf("the copy of %s is",ch[i]);
        for(j=0;j<n[i];j++){
            ch1[i][j]=ch[i][j];
        }


        printf("%s\n",ch1[i]);
    }
}