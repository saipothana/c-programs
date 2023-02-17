//double dimension array dynamic --by giving sizes

#include<stdio.h>
#include<conio.h>
void main(){
    int a[3][3],i,j;
for(i=0;i<3;i++){
    printf("the row :%d\n",i);
    for(j=0;j<3;j++){
        printf("the col is %d\n",j);
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");
}
}