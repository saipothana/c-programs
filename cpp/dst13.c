//substring  

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
        for(j=si[i];j<=ei[i];j++){
  printf("  %c",ch[i][j]);
        }

       
    }
}