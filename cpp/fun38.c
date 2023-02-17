//left rotate of matrix using functions

#include<stdio.h>
#include<conio.h>

int rot(int a[100][100],int r1,int c1);
int rot(int a[100][100],int r1,int c1){
    int i,j,k,t;
    for(i=0;i<r1;i++){
       t=a[i][0];
        for(j=0;j<c1;j++){
          a[i][j]=a[i][j+1];  
        }
a[i][c1-1]=t;
    }


    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d",a[i][j]);
        }
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

rot(a,r1,c1);
}