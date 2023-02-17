//mul
//orth
//sum row
//sum col
//max and min col
//sort col
//del dup
//left roratre

//orthofonal matrix using function'  //heree i directly compared aat with I without calculating I --its a optimised solution

#include<stdio.h>
#include<conio.h>
int ortho(int a[100][100],int r1,int c1);
int ortho(int a[100][100],int r1,int c1){
   int c[100][100],i,j,k,b[100][100];
   
for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            b[i][j]=a[j][i];
        }
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
         c[i][j]=0;
         for(k=0;k<c1;k++){
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
         }   
        }
    }
int var=c[0][0];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
           c[i][j]=c[i][j]/var;
            printf("%d",c[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            if(i==j&&c[i][j]!=1){
                break;
            }
            else if(i!=j&&c[i][j]!=0){
                break;
            }
        }
    }



    if(i==r1&&j==c1){
        printf("orthogonal\n");
    }
    else{
        printf("not orthogonal\n");
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
ortho(a,r1,c1);
}