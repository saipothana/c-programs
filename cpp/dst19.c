//compare two strings

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30][30];

    int noc,i,j,k,flag;
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
 }

 for(i=0;i<noc;i++){
    for(k=0;ch[i][k]!='\0';k++);  //i=0 rama 
    for(j=0;ch1[i][j]!='\0';j++);
  
  

    for(j=0;ch[i][j]!='\0';j++){

if(ch[i][j]!=ch1[i][j]){
  break;
}
    }

 
if(ch[i][j]==ch1[i][k]){
  printf("%s %s are equal\n",ch[i],ch1[i]);
}
else{
  printf("%s %s are not equal\n",ch[i],ch1[i]);
}


  }
 

  
 
 
 
}



