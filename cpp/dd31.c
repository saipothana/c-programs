//Adjoint matrix:--means a b =====    d -b
//                       c d =====   -c a

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],y[100][100],i,j,det,r,c;
printf("enter r\n");
scanf("%d",&r);
printf("enter c\n");
scanf("%d",&c);

if(r==c){
for(i=0;i<r;i++){
    printf("enter row: %d\n",i);
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }

}
if(r==2&&c==2){
    y[0][0]=a[1][1];
    y[0][1]=-1*a[0][1];
    y[1][0]=-1*a[1][0];
    y[1][1]=a[0][0];
}

if(r==3&&c==3){
    y[0][0]=(a[1][1]*a[2][2]-a[2][1]*a[1][2]);
    y[0][1]=(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
    y[0][2]=(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
    y[1][0]=(a[0][1]*a[2][2]-a[2][1]*a[0][2]);
    y[1][1]=(a[0][0]*a[2][2]-a[2][0]*a[0][2]);
     y[1][2]=(a[0][0]*a[2][1]-a[2][0]*a[0][1]);
      y[2][0]=(a[0][1]*a[1][2]-a[1][1]*a[0][2]);
       y[2][1]=(a[0][0]*a[1][2]-a[1][0]*a[0][2]);
        y[2][2]=(a[0][0]*a[1][1]-a[1][0]*a[0][1]);

}
printf("the deteminent matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",y[i][j]);
    }
    printf("\n");
}

}

else{
    printf("%d * %d is not square");
    }


}