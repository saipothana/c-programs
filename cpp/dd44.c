//sortion elements rowwise

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],i,j,r,k,c;
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

        for(j=0;j<c;j++){
            for(k=j+1;k<c;k++){
            if(a[i][j]>a[i][k]){
                a[i][j]=a[i][j]+a[i][k];
                a[i][k]=a[i][j]-a[i][k];
                a[i][j]=a[i][j]-a[i][k];
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
    printf("not square");
}
}
