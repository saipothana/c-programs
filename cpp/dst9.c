//copy strings without k

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30][30];
    int noc,i,j;
    printf("enter nos\n");
    scanf("%d",&noc);

    for(i=0;i<noc;i++){
printf("enter str %d\n",i);
fflush(stdin);
scanf("%s",&ch[i]);
    }

    for(i=0;i<noc;i++){
        printf("before copy %s\n",ch[i]);

        for(j=0;ch[i][j]!='\0';j++){
ch1[i][j]=ch[i][j];
        }

        printf(" the copy of ch %s to ch1 %s .\n",ch[i],ch1[i]);
    
    //ch1[i][j]='\0';
    }

     //ch1[i][j]='\0';//ctrlb is used to put full screen in vs .

}