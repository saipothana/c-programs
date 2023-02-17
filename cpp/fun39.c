// dd strings using funs

//reverse case

//copy

//rev sub

//pali

//compare n

//concat n 

//inser

//dub

//sort


//======================================================//
//reverse case 

#include<stdio.h>
#include<conio.h>
char rev(char ch[30][30],int noc);
char rev(char ch[30][30],int noc){
    int i,j,k;
    for(i=0;i<noc;i++){
        printf("the  revcase of  %s is: ",ch[i]);
        //printf("%s",ch[i]);
    }

    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++);
        for(j=0;ch[i][j]!='\0';j++){
            if(ch[i][j]>=65&&ch[i][j]<=97){
                ch[i][j]=ch[i][j]+32;
            }
            else if(ch[i][j]<=122&&ch[i][j]>=97){
                ch[i][j]=ch[i][j]-32;
            }
        }
   printf("%s",ch[i]);
      
    }

}
void main(){
    char ch[30][30];
    int noc,i,j;
    printf("enter noc\n");
    scanf("%d",&noc);
for(i=0;i<noc;i++){
    printf("enter string %d\n",i);
    fflush(stdin);
    scanf("%s",&ch[i]);
}
rev(ch,noc);
}