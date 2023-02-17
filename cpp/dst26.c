//compare n strings  jeevam jeev in=2  jee  === jee true


#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30][30];
    int i,j,k,noc,n[i];

    printf("enter noc\n");
    scanf("%d",&noc);

    for(i=0;i<noc;i++){
        printf("enter str1 %d\n",i);
        fflush(stdin);
        scanf("%s",&ch[i]);
    }

       for(i=0;i<noc;i++){
        printf("enter str2 %d\n",i);
        fflush(stdin);
        scanf("%s",&ch1[i]);
        printf("enter n[i]\n");
        scanf("%d",&n[i]);
    }

    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++);

        for(k=0;k<=n[i];k++){
            if(ch[i][k]!=ch1[i][k]){
                break;
            }
        }

        if(ch[i][k]==ch1[i][k]){
printf("%s %s are eq\n",ch[i],ch1[i]);
        }
        else{
            printf(" %s %s not equal\n",ch[i],ch1[i]);
        }
    }
}