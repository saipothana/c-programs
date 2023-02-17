#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30][30],ch2[30][30];
    int noc,i,j,k;
    printf("enter nos\n");
    scanf("%d",&noc);

    for(i=0;i<noc;i++){
printf("enter str %d\n",i);
fflush(stdin);
scanf("%s",&ch[i]);
    }


    for(i=0;i<noc;i++){
printf("enter str2 %d\n",i);
fflush(stdin);
scanf("%s",&ch1[i]);
    }

    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++);  //here j=4  4 onwrds its adding
        for(k=0;ch[i][k]!='\0';k++){
            ch[i][j++]=ch1[i][k];
        }

        puts(ch[i]);
    }


}