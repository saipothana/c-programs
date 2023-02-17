//palindrome ar not

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30][30];
    int noc,i,j,k;

    printf("enter noc\n");
    scanf("%d",&noc);
    for(i=0;i<noc;i++){
        printf("enter str %d\n",i);
        fflush(stdin);
        scanf("%s",ch[i]);
    }

    for(i=0;i<noc;i++){
        k=0;
        for(j=0;ch[i][j]!='\0';j++){
        
        }

        while(--j>-1){
        ch1[i][k++]=ch[i][j];
        }
        ch1[i][k++]='\0';
       for(j=0;ch[i][j]!='\0';j++){
        if(ch1[i][j]!=ch[i][j]){
            break;

        }
       }
       if(ch[i][j]==ch1[i][j]){
        printf("%s  is pali\n",ch[i]);
       }
       else{
        printf("not");
       }
        


        

    }
}