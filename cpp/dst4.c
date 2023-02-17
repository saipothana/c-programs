//find length of double string

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30];
    int i,j,nos;

    printf("enter nos\n");
    scanf("%d",&nos);

    for(i=0;i<nos;i++){
        printf("enter str: %d\n",i);
        fflush(stdin);
        scanf("%s",&ch[i]);
    }
for(i=0;i<nos;i++){
    printf("the length of %s\n",ch[i]);
    for(j=0;ch[i][j]!=0;j++){

    }
    printf("%d\n",j);
}
}