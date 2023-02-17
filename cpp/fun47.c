//sorting strings  using funstions

#include<stdio.h>
#include<conio.h>
#include<string.h>
int sort(char ch[30][30],int noc);
int sort(char ch[30][30],int noc){
    int i,j,k;
    char test[30];

   /* for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++){

        }
        for(j=0;ch[i][j]!='\0';j++){
            for(k=j+1;ch[i][k]!='\0';k++){
               if(strcmp(ch[j],ch[k])>0){
                 strcpy(t,ch[i][j]);
                  strcpy(ch[i][j],ch[i][k]);
                  strcpy(ch[i][k],t);
                }
            }
        }
*/

for(i=0;i<noc;i++){
    for(j=i+1;j<noc;j++){
        if(strcmp(ch[i],ch[j])>0){
strcpy(test,ch[i]);//test =ch[i]
strcpy(ch[i],ch[j]);
strcpy(ch[j],test);

        }
    }
}

for(i=0;i<noc;i++){
    printf("%s\n",ch[i]);
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
for(i=0;i<noc;i++){
    printf("%s\n",ch[i]);
}
printf("++++++\n");
sort(ch,noc);

}