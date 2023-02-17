//null matrix ---means all the ele inside matr is 0



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

    printf("the null matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            a[i][j]=0;
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}