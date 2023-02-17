//max and min elements of a matrix in rowwise

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],i,j,r,c,min,max;
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

    for(i=0;i<r;i++){
        min=a[i][0];
        max=a[i][0];
        for(j=0;j<c;j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        for(j=0;j<c;j++){
            printf("%d\n",a[i][j]);
        }
        printf("max=%d min= %d\n",max,min);
    }
}
else{
    printf("not square matrix");
}
}