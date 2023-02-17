//init cap

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30];
    int i,j,noc;
     printf("enter noc\n");
    scanf("%d",&noc);
    for(i=0;i<noc;i++){
        printf("enter str %d\n",i);
        fflush(stdin);
        scanf("%s",&ch[i]);
    }

    for(i=0;i<noc;i++){
        printf("before init cap %s\n",ch[i]);

        if(ch[i][0]<=122&&ch[i][0]>=97){
            ch[i][0]=ch[i][0]-32;
        }
        else{
            ch[i][0]=ch[i][0];
        }
        for(j=1;ch[i][j]!='\0';j++){
 if(ch[i][j]>=65&&ch[i][j]<=90){
                ch[i][j]=ch[i][j]+32;
            }
            
        }
        printf("%s\n",ch[i]);
    }
}