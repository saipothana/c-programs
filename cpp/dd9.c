//transpose matrix---means interchanging rows and columns

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],r,c,i,j;
     printf("enter r\n");
    scanf("%d",&r);
    printf("enter col\n");
    scanf("%d",&c);
    
    for(i=0;i<r;i++){
        printf("the row: %d ",i);
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    printf("the transpose matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
}