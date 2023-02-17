//compare n characters

#include<stdio.h>
#include<conio.h>
char comp(char ch[30][30],char ch1[30][30],int noc,int w[30]);

char comp(char ch[30][30],char ch1[30][30],int noc,int w[30]){

 int i,j,k;
 for(i=0;i<noc;i++){
    for(j=0;ch[i][j]!='\0';j++);
 for(j=0;j<w[i];j++){
    if(ch[i][j]!=ch1[i][j]){
        break;
    }
 }
 printf("%s\n",ch[i]);
printf("%s\n",ch1[i]);
 if(ch[i][j]==ch1[i][j]){
    printf("%s %s are equal\n",ch[i],ch1[i]);
 }
 else{
     printf("%s %s are not equal\n",ch[i],ch1[i]);
 }

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
  printf("%s\n",ch[i]);  
}

printf("===========================\n");

comp(ch,ch1,noc,w);
}