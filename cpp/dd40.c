//sum 0f the elements in a matrix colwise using array variable

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
int s[100];
for(i=0;i<r;i++){
s[i]=0;
  for(j=0;j<c;j++){
    
   
        s[i]=s[i]+a[j][i];
  }
  for(j=0;j<c;j++){
    printf("%d\n",a[i][j]);
  }
    
    printf("\n");
  
  
}
for(j=0;j<c;j++){
    printf("%d ",s[j]);
}
    }

else{
    printf("not square");
}
}