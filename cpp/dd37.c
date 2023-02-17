//multiplication of matrix------no of col in first nat == no of rows in sec

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],b[100][100],d[100][100],i,j,k,r1,c1,r2,c2;
   printf("enter r\n");
   scanf("%d",&r1);
   printf("enter c\n");
   scanf("%d",&c1);

 printf("enter r\n");
   scanf("%d",&r2);
   printf("enter c\n");
   scanf("%d",&c2);
if(c1==r2){
   for(i=0;i<r1;i++){
    printf("enter row:%d\n",i);
    for(j=0;j<c1;j++){
scanf("%d",&a[i][j]);
    }
   }
   printf("first matrix:\n");
    for(i=0;i<r1;i++){
 for(j=0;j<c1;j++){
printf("%d",a[i][j]);
    }
    printf("\n");
   }


   for(i=0;i<r2;i++){
    printf("enter row:%d\n",i);
    for(j=0;j<c2;j++){
scanf("%d",&b[i][j]);
    }
   }
   printf("second matrix:\n");
    for(i=0;i<r2;i++){
 for(j=0;j<c2;j++){
printf("%d",b[i][j]);
    }
    printf("\n");
   }


for(i=0;i<r2;i++){
    for(j=0;j<c1;j++){
        d[i][j]=0;
        for(k=0;k<c1;k++){
d[i][j]=d[i][j]+a[i][k]*b[k][j];
        }
    }
}


printf("multi matrix:\n");
    for(i=0;i<r1;i++){
 for(j=0;j<c2;j++){
printf("%d",d[i][j]);
    }
    printf("\n");
   }

}
else{
    printf("%d * %d add not posible");
}
}