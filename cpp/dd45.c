//sorting column wise

#include<stdio.h>
#include<conio.h>
void main(){
    int r,c,a[100][100],i,j,k;
printf("enter r");
scanf("%d",&r);
printf("enter c");
scanf("%d",&c);
if(r==c){
for(i=0;i<r;i++){
    printf("enter row: %d\n",i);
    for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        for(k=j+1;k<c;k++){
            if(a[j][i]>a[k][i]){
                a[j][i]=a[j][i]+a[k][i];
                a[k][i]=a[j][i]-a[k][i];
                a[j][i]=a[j][i]-a[k][i];
            }
        }
    }
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

}
else{
    printf("%d * %d not square",r,c);
}
}