//transpose matrix---means interchanging rows and columns  using another var

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],r,c,i,j,y[100][100];
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
            y[i][j]=a[j][i];
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    printf("the transpose matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",y[i][j]);
        }
        printf("\n");
    }
}