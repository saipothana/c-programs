//sum 0f the elements in a matrix colwise

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
int k;
for(i=0;i<r;i++){
s=0;
  for(j=0;j<c;j++){
    
   
        s=s+a[j][i];
  }
  for(j=0;j<c;j++){
    printf("%d\n",a[j][i]);
  }
    
    printf("sum=%d\n",s);
  
  
}
    }

else{
    printf("not square");
}
}