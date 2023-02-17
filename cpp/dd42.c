//max and min elements of a matrix in columnwise

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
        
  min=a[0][i];//1
  max=a[0][i];//1
  for(j=0;j<c;j++){
    if(a[j][i]<min){
        min=a[j][i];
    }
    if(a[j][i]>max){
        max=a[j][i];
    }
  }
  for(j=0;j<c;j++){
    printf("%d\n",a[j][i]);
  }
        
        
  printf("max=%d min=%d\n ",max,min);
    }
    
    }
    else{
        printf("not a square");
    }
}
    