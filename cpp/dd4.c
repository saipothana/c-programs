//dda by  not giving  sizes
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],i,j,r,c;
    printf("enter row\n");
    scanf("%d",&r);
    printf("enter col\n");
    scanf("%d",&c);

for(i=0;i<r;i++){
    printf("the row :%d\n",i);
    for(j=0;j<c;j++){
        printf("the col is %d\n",j);
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");
}
}
