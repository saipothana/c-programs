//sum 0f the elements in a matrix rowwise

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],i,j,s,r,c;
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
   s=0;
   for(j=0;j<c;j++){
    s=s+a[i][j];
   }
  for(j=0;j<c;j++){
    printf("%d ",a[i][j]);
  }
   
printf("sum=%d\n",s);
}

  
}

else{
    printf("not square");
}
}