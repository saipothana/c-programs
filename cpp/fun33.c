//sum of ele in colwise  use funs

#include<stdio.h>
#include<conio.h>
int sumc(int a[100][100],int r1,int c1);
int sumc(int a[100][100],int r1,int c1){
    int sum,i,j,k;
    

    for(i=0;i<r1;i++){
        sum=0;
        for(j=0;j<c1;j++){
            printf("%d",a[j][i]);
            sum=sum+a[j][i];  //a[0][0]  //a[0][1]  a[j][i]---a[0][1]  a[1]
        }
        printf(" =%d ",sum);
        printf("\n");
    
    }
}


void main(){
int a[100][100],r1,c1,i,k,j;
printf("enter r1 and c1\n");
scanf("%d %d",&r1,&c1);

for(i=0;i<r1;i++){
    printf("enter row:%d\n",i);
    for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<r1;i++){
    
    for(j=0;j<c1;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");
}
printf("the sum of elements col wise\n");
sumc(a,r1,c1);
}
