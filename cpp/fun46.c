//delete dubli in str using funs

#include<stdio.h>
#include<conio.h>
char dub(char ch[30][30],int noc);

char dub(char ch[30][30],int noc){
    int i,j,k,p,l;

    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++){
            
        }
        for(j=0;ch[i][j]!='\0';j++){
            for(k=j+1;ch[i][k]!='\0';k++){
                if(ch[i][j]==ch[i][k]){
                    for(p=k;ch[i][p]!='\0';p++){
                        ch[i][p]=ch[i][p+1];
                    }
                    p--;
                    k--;
                }
            }
        }
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
dub(ch,noc);

}