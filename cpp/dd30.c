//singular matrix ----if the |a|=0;---det==0;

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],i,j,det,r,c;
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
    if(r==2||c==2){
        det=a[1][1]*a[0][0]-a[0][1]*a[1][0];
        if(det==0){
            printf("%d * %d is singular ",r,c);
        }
        else{
            printf("%d * %d is  not singular ",r,c);
        }
    }
    if(r==3&&c==3){
    det=(a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])+-1*a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));
    if(det==0){
            printf("%d * %d is singular ",r,c);
        }
        else{
            printf("%d * %d is  not singular ",r,c);
        }
    }

}


else{
    printf("%d * %d is not singular",r,c);
}
}