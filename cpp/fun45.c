//insert elements using function in strings

#include<stdio.h>
#include<conio.h>
char ins(char ch[30][30],char val[30],int noc,int a[100]);
char ins(char ch[30][30],char val[30],int noc,int a[100]){
    int i,j,k;
    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++){

        }
        for(k=j;k>=a[i];k--){
            ch[i][k+1]=ch[i][k];
        }
        ch[i][a[i]]=val[i];

        printf("%s\n",ch[i]);
    }
}
void main(){
char ch[30][30],val[30];
    int noc,i,j,a[30];
    printf("enter noc\n");
    scanf("%d",&noc);
   


for(i=0;i<noc;i++){
   printf("enter string %d\n",i);
    fflush(stdin);
    scanf("%s",&ch[i]);
    printf("enter value char\n");
    fflush(stdin);
    scanf("%c",&val[i]);
    printf("enter w %d\n",i);
    scanf("%d",&a[i]);  
}
for(i=0;i<noc;i++){
  printf("==%s\n",ch[i]);  
}

ins(ch,val,noc,a);

}
