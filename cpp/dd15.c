//unit matrix checker not using flag 

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],r,c,i,j;
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
            if(i==j){
                if(a[i][j]!=1){
                    break;
                }
            }
            else if(i!=j){
                if(a[i][j]!=0){
                    break;
                }
            }
        }
    }
if(i==r&&j==c){
    printf("%d * %d is unit",r,c);
}
else{
    printf("%d * %d is not unit",r,c);
}
    }
    else{
        printf("%d * %d is not unit",r,c);
    }

}