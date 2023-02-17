//concat of n char   jeev   veej  index 2   jeevve

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
        for(j=0;ch[i][j]!='\0';j++){

        }

        k=0;
        for(j=0;ch[i][j]!='\0';j++){
            ch2[i][k++]=ch[i][j];
        }

        for(p=0;p<=n[i];p++){
            ch2[i][k++]=ch1[i][p];
        }
ch2[i][k++]='\0';
       // for(j=0;ch2[i][j]!='\0';j++){
        
        //}
         printf("%s\n",ch2[i]);   
    }

}