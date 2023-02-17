//scalar matrix-----------5 0 0
//------------------------0 5 0
//------------------------0 0 5
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],r,c,i,j,flag=0,f;
     printf("enter r\n");
    scanf("%d",&r);
    printf("enter col\n");
    scanf("%d",&c);
    printf("enter f");
    scanf("%d",&f);
    if(r==c){
    for(i=0;i<r;i++){
        printf("the row: %d ",i);
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j){
                a[i][j]=f;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    printf("scalar is \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");

    }
    }
    else{
        printf("%d * %d is mot square and scalar",r,c);
    }

}