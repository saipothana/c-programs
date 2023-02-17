//reverse str using while loop

#include<stdio.h>
void main(){
    char ch[30][30];
    int noc,i,j,k;

    printf("enter noc\n");
    scanf("%d",&noc);

    for(i=0;i<noc;i++){
        printf("enter str %d\n",i);
        fflush(stdin);
        scanf("%s",&ch[i]);
    }

    for(i=0;i<noc;i++){
        printf("before rev %s\n",ch[i]);
        for(j=0;ch[i][j]!='\0';j++);
        printf("After rev:");
       while(--j>-1){
            printf("%c",ch[i][j]);
        }
        
        printf("\n");
    }
}