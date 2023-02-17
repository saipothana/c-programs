//substring    checking

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30];
    int i,j,k,si[30],ei[30],noc;

    printf("enter noc\n");
    scanf("%d",&noc);

   

    for(i=0;i<noc;i++){
       
        printf("enter string %d\n",i);
        fflush(stdin);
        scanf("%s",&ch[i]);

         printf("enter start and end index ");
        scanf("%d %d",&si[i],&ei[i]);
          
    }

    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++){
 
        }
        if(si[i]<=ei[i]&&si[i]>=0&&ei[i]>=si[i]&&ei[i]<j){

        for(k=si[i];k<=ei[i];k++){

        
        printf(" %c",ch[i][k]);
        }
       
    }
    else{
        printf("no sub\n");
    }
    }
}