//check col matrix or not 
//column matrix is having m*1 ---1 col and multiple rows
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],r,c,i,j;
    printf("enter r\n");
    scanf("%d",&r);
    printf("enter col\n");
    scanf("%d",&c);
    if(c==1){
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

   printf("%d * %d is row matrix\n",r,c) ;

    }
    else{
        printf("%d *%d is not row matrix\n",r,c);
    }
    }