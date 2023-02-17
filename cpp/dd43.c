// max and min of a matrix

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],i,j,min,max,r,c;
     printf("enter r\n");
    scanf("%d",&r);
    printf("enter c\n");
    scanf("%d",&c);
    if(r==c){
    for(i=0;i<r;i++){
        printf("enter row:%d\n",i);
        for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
        }
    }
    min=a[0][0];
max=a[0][0];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
if(a[i][j]<min){
min=a[i][j];
}
if(a[i][j]>max){
    max=a[i][j];
}
        }
       
        }
         printf("max =%d min=%d",max,min);
    }

else{
    printf("not square matrix\n");
}
}