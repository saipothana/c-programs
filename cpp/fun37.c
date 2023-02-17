//delete duplicates using functions

#include<stdio.h>
#include<conio.h>
int dup(int a[100][100],int r1,int c1);


int dup(int a[100][100],int r1,int c1){
    int i,j,k,p;
    for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
    for(k=j+1;k<c1;k++){
        if(a[i][j]==a[i][k]){
            for(p=0;p<c1;p++){
                a[i][p]=a[i][p+1];
            }
            
            c1--;
            
        }
    }
}

for(i=0;i<r1;i++){
    for(j=0;j<k;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");
}
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
printf("=============\n");

dup(a,r1,c1);
}