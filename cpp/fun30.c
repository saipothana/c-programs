//mattrix multiplication using functions

#include<stdio.h>
#include<conio.h>
int mul(int a[100][100],int b[100][100],int r1,int c1,int r2,int c2);
int mul(int a[100][100],int b[100][100],int r1,int c1,int r2,int c2){
    int c[100][100],i,j,k;
    for(i=0;i<r1;i++){
       
        for(j=0;j<c1;j++){
            c[i][j]=0;
            for(k=0;k<c2;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
   for(i=0;i<r1;i++){
       
        for(j=0;j<c1;j++){
            printf("%d ",c[i][j]);
}
printf("\n");
}

}
void main(){
int a[100][100],b[100][100],r1,r2,c1,c2,i,j,k;
printf("enter r1 and c1\n");
scanf("%d %d",&r1,&c1);
printf("enter r2 and c2\n");
scanf("%d %d",&r2,&c2);
for(i=0;i<r1;i++){
    printf("enter row:%d\n",i);
    for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<r2;i++){
    printf("enter row:%d\n",i);
    for(j=0;j<c2;j++){
        scanf("%d",&b[i][j]);
    }
}

for(i=0;i<r1;i++){
 
    for(j=0;j<c1;j++){
printf("%d",a[i][j]);
}
printf("\n");
}

for(i=0;i<r2;i++){
 
    for(j=0;j<c2;j++){
printf("%d",b[i][j]);
}
printf("\n");
}

mul(a,b,r1,c1,r2,c2);


}
