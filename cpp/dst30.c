//delete duplicates

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char ch[30][30],test[30];
    int i,j,k,noc,p;
      printf("enter noc\n");
    scanf("%d",&noc);

    for(i=0;i<noc;i++){
        printf("enter str %d\n",i);
        fflush(stdin);
        scanf("%s",&ch[i]);
}
for(i=0;i<noc;i++){
for(k=0;ch[i][k]!='\0';k++){
    for(j=k+1;ch[i][j]!='\0';j++){
        if(ch[i][k]==ch[i][j]){
            for(p=k;ch[i][p]!='\0';p++){
                ch[i][p]=ch[i][p+1];
            }

            p--;
        }
    }
}
  printf(" the %s\n",ch[i]);

}


}
