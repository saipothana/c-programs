//scalar matrix checking
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],r,c,i,j,k,flag=0;
     printf("enter r\n");
    scanf("%d",&r);
    printf("enter col\n");
    scanf("%d",&c);
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
            for(k=0;k<c-1;k++){
                if(i==j&&a[j][k]!=a[j+1][k+1]){
                    flag=1;
                    break;
                }
                else if(i!=j && a[i][j]!=0){
                    flag=1;
                    break;
                }
            }
        }
    }


    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    if(flag==0){
        printf("%d * %d is scalar",r,c);
    }
    else{
        printf("%d * %d is not  scalar",r,c); 
    }
    }

    else{
        printf("%d * %d is not scalar",r,c);
    }

}