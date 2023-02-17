//right rotation

//right rotation

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],r,c,i,j,k,p;
    printf("enter r\n");
    scanf("%d",&r);
    printf("enter c\n");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        printf("enter row:%d\n",i);
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

for(i=0;i<r;i++){
p=a[i][c-1];
   for(j=c-1;j>=0;j--){
    a[i][j+1]=a[i][j];
   }
   a[i][0]=p;
}

for(i=0;i<c;i++){
    for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

}

    




