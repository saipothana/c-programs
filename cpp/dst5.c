//uppercase  to low........in

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30];
    int noc,i,j;

    printf("enter noc\n");
    scanf("%d",&noc);
    for(i=0;i<noc;i++){
        printf("enter string %d\n",i);
        fflush(stdin);
        scanf("%s",ch[i]);
    }

    for(i=0;i<noc;i++){

        printf("before u to l conv %s\n",ch[i]);

        for(j=0;ch[i][j]!='\0';j++){
            if(ch[i][j]>=65&&ch[i][j]<=90){
                ch[i][j]=ch[i][j]+32;
            }
            else{
                ch[i][j]=ch[i][j];
            }
        }
        printf(" the after conv %s\n",ch[i]);
    }
}