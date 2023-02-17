//concat  using 3 variable 

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30][30],ch2[30][30];
    int noc,i,j,k,l;
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
    k=0;
    for(j=0;ch[i][j]!='\0';j++){
ch2[i][k++]=ch[i][j];
    }
    for(l=0;ch1[i][l]!='\0';l++){
        
        ch2[i][k++]=ch1[i][l];

    }

   ch2[i][k++]='\0';
    printf(" concat %s\n",ch2[i]);
 }

 

}