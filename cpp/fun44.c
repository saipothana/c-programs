//concat two str using fun

#include<stdio.h>
#include<conio.h>
char cont(char ch[30][30],char ch1[30][30],int noc,int w[30]);

char cont(char ch[30][30],char ch1[30][30],int noc,int w[30]){
    int i,j,k,p;
    char ch3[30][30];
    for(i=0;i<noc;i++){
        
        for(j=0;ch[i][j]!='\0';j++);
p=0;
        for(j=0;ch[i][j]!='\0';j++){
            ch3[i][p++]=ch[i][j];
        }
for(k=0;k<=w[i];k++){
    ch3[i][p++]=ch1[i][k];
}
        

        ch3[i][p++]='\0';
      printf("%s\n",ch3[i]);
    }
}
void main(){
    char ch[30][30],ch1[30][30];
    int noc,i,j,w[30];
    printf("enter noc\n");
    scanf("%d",&noc);
   
for(i=0;i<noc;i++){
    printf("enter string %d\n",i);
    fflush(stdin);
    scanf("%s",&ch[i]);
}

for(i=0;i<noc;i++){
   printf("enter string %d\n",i);
    fflush(stdin);
    scanf("%s",&ch1[i]);
    printf("enter w %d\n",i);
    scanf("%d",&w[i]);  
}
for(i=0;i<noc;i++){
  printf("%s\n",ch[i]);  
}


for(i=0;i<noc;i++){
  printf("%s\n",ch1[i]);  
}

printf("===========================\n");

cont(ch,ch1,noc,w);
}