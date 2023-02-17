//product of two matrices using functions 

#include<stdio.h>
#include<conio.h>
void multi(int a[100][100],int b[100][100]);
void multi(int a[100][100],int b[100][100]){
    
        int c[100][100],r1,c1,r2,c2,i,j,k;
    if(c1==r2){
    
        for(i=0;i<r1;i++){
            
            for(j=0;j<c2;j++){
                c[i][j]=0;
                for(k=0;k<c2;k++){
                    c[i][j]=c[i][j]+a[i][k]+b[k][j];
                    printf("%d",c[i][j]);
                }
                printf("\n");
            }
        }
    }
   else{
    c[i][j]=0;
   }

   printf("the result matrix\n");
   for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        printf("%d",c[i][j]);
    }
    printf("\n");
   }
  
}
void main(){
    int a[100][100],b[100][100],r1,c1,r2,c2,i,j;
    printf("enter r1\n");
scanf("%d",&r1);
printf("enter c1\n");
scanf("%d",&c1);
printf("enter r2\n");
scanf("%d",&r2);
printf("enter c2\n");
scanf("%d",&c2);

for(i=0;i<r1;i++){
    printf("enter row i\n",i);
    for(j=0;j<c1;j++){
        printf("a[%d][%d]\n",i,j);
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<r2;i++){
    printf("enter row i\n",i);
    for(j=0;j<c2;j++){
        printf("b[%d][%d]\n",i,j);
        scanf("%d",&b[i][j]);
    }
}

for(i=0;i<r1;i++){
    
    for(j=0;j<c1;j++){
        printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        
    }
    printf("\n");
}


for(i=0;i<r1;i++){
    
    for(j=0;j<c1;j++){
        printf("b[%d][%d]=%d\n",i,j,b[i][j]);
        
    }
    printf("\n");
}

multi(a,b);


}