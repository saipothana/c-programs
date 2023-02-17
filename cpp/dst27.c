//insert element into array

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30];
    int i,j,in[i],noc,k;


    printf("enter noc\n");
    scanf("%d",&noc);
    for(i=0;i<noc;i++){
        printf("enter str1 %d\n",i);
        fflush(stdin);
        scanf("%s",&ch[i]);
        printf("enter index %d",i);
        scanf("%d",&in[i]);
        printf("enter char to be insert\n");
        fflush(stdin);
        scanf("%c",&ch1[i]);
    }

    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++);

        for(k=j;k>=in[i];k--){
            ch[i][k+1]=ch[i][k];
        }
        ch[i][in[i]]=ch1[i];

        printf("%s\n",ch[i]);
    }
}