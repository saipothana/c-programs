//reverse substring


#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30];
    int si[30],ei[30],noc,i,j,k;

    printf("enter noc\n");
    scanf("%d",&noc);

    for(i=0;i<noc;i++){
        printf("enter str %s\n",ch[i]);
        scanf("%s",&ch[i]);
        printf("enter index\n");
        scanf("%d %d",&si[i],&ei[i]);
    }

    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++);
        if(si[i]>=0&&si[i]<=ei[i]&&ei[i]>=si[i]&&ei[i]<j){
            for(k=ei[i];k>=si[i];k--){

        
        printf(" %c",ch[i][k]);
        }

        }
        else{
            printf("no substring\n");
        }
        printf("\n");
    }
}