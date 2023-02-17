//sorting

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