//sorting of elements in column wise

#include<stdio.h>
#include<conio.h>
int sort(int a[100][100],int r1,int c1);

int sort(int a[100][100],int r1,int c1){
int i,j,k;
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        for(k=j+1;k<c1;k++){
            if(a[j][i]>a[k][i]){  //a[1][0]>a[2][o]
                a[j][i]=a[j][i]+a[k][i];
                a[k][i]=a[j][i]-a[k][i];
                a[j][i]=a[j][i]-a[k][i];
            }
        }
    }
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
printf("=============\n");


for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        printf("%d",a[j][i]);
    }
    printf("\n");
} 

printf("------------\n");
sort(a,r1,c1); 
}
