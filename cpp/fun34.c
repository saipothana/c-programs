//max and min of elements in colwise use fun

#include<stdio.h>
#include<conio.h>
int maxmin(int a[100][100],int r1,int c1);

int maxmin(int a[100][100],int r1,int c1){
int i,j,k,max,min;
for(i=0;i<r1;i++){
max=a[0][i];
min=a[0][i];
    for(j=0;j<c1;j++){
if(max<a[j][i]){
    max=a[j][i];
}
if(min>a[j][i]){
    min=a[j][i];
}
printf("%d",a[i][j]);
    }
    printf("max=%d min=%d\n",max,min);
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
printf("the max and min of ele in col wise is\n");
maxmin(a,r1,c1);    
}