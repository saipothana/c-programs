//nilpotent matrix----AK=A-------and k<c

#include<stdio.h>
#include<conio.h>
void main(){
    
     int a[100][100],y[100][100],i,j,k,r,c,sum,flag=1,m;
    printf("enter row\n");
    scanf("%d",&r);
    printf("enter col\n");
    scanf("%d",&c);
    if(r==c){
          
    for(i=0;i<r;i++){
        printf("enter row: %d\n",i);
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    

    for(m=0;m<c;m++){
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        y[i][j]=0;
        for(k=0;k<r;k++){
            y[i][j]=y[i][j]+a[i][k]*a[k][j];
        }
    }
}
    }
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(y[i][j]!=0){
            flag=0;
            break;
        }
    }
}
if(flag==1){
    printf(" nill Idempotent");
}
else{
    printf("not");
}
    }
    else{
        printf("not a square matrix\n");
    }
}