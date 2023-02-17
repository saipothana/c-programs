//null matrix ---means all the ele inside matr is 0

//check null or not

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],r,c,i,j,flag=1;
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
           if(a[i][j]==0){
            flag=1;
           }
           else{
            flag++;
           }
        }
        printf("\n");
    }
if(flag==1){
    printf("the null matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            a[i][j]=0;
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

}
else{
    printf("%d * %d is not null",r,c);
}
}