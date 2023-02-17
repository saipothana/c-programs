//symmetric matrix  At=A

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],r,c,i,j,k,y[100][100];
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
printf("normal mat\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            y[i][j]=a[j][i];
        }
    }
 printf("transpose mat\n");   
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",y[i][j]);
    }
    printf("\n");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
if(y[i][j]!=a[j][i]){
    break;
}
        }
    }

    if(i==r&&j==c){
        printf("%d * %d is symetrric",r,c);
    }

    else{
      printf("%d * %d is  not symmetric",r,c);  
    }

    }
    
    else{
        printf("%d * %d is not square");
    }
}