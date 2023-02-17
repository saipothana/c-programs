//concat of n char   jeev   veej  index 2   jeevve
//checkinh

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30][30],ch2[30][30];

    int i,j,k,noc,n[i],p;

    printf("enter noc\n");
    scanf("%d",&noc);

    for(i=0;i<noc;i++){
        printf("enter str %d\n",i);
        fflush(stdin);
        scanf("%s",&ch[i]);
    }
for(i=0;i<noc;i++){
        printf("enter str %d\n",i);
        fflush(stdin);
        scanf("%s",&ch1[i]);

        printf("enter n\n");
        scanf("%d",&n[i]);
    }


    for(i=0;i<noc;i++){
        for(j=0;ch1[i][j]!='\0';j++){

        }
       if(n[i]<j&&n[i]>=0){

        for(k=0;k<=n[i];k++){
            ch[i][j++]=ch1[i][k];
        }
       ch[i][j++]='\0';
        printf("%s\n",ch[i]);

    }
    else{
      printf("no\n");
   }
    }



}