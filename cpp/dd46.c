//insert element into matrix
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],in[100],val[100],r,c,i,j;
    printf("enter r\n");
    scanf("%d",&r);
    printf("enter c\n");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        printf("enter elements: %d\n",i);
        for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
        }
    }
for(i=0;i<r;i++){
    printf("enter index\n");
    scanf("%d",&in[i]);
}
for(i=0;i<r;i++){
    printf("enter value\n");
    scanf("%d",&val[i]);
}

    for(i=0;i<r;i++){
        for(j=c-1;j>=in[i];j--){
            a[i][j+1]=a[i][j];
        }
        a[i][in[i]]=val[i];
    }


for(i=0;i<r;i++){
    for(j=0;j<=c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

}