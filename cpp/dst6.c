//lower to up

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30];
    int i,j,noc;

    printf("enter noc\n");
    scanf("%d",&noc);
    for(i=0;i<noc;i++){
        printf("enter str %d:\n",i);
        fflush(stdin);
        scanf("%s",&ch[i]);
    }

    for(i=0;i<noc;i++){
        printf("before u to l conv %s\n",ch[i]);

        for(j=0;ch[i][j]!='\0';j++){
            if(ch[i][j]>=97&&ch[i][j<=122]){
ch[i][j]=ch[i][j]-32;
            }
            else{
                ch[i][j]=ch[i][j];
            }
        }
        printf("after con %s\n",ch[i]);
    }
}