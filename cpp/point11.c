//two dimensional dynamic memory arry

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int **p;
    int i,j,r,c;
printf("enter r\n");
scanf("%d",&r);
printf("enter c\n");
scanf("%d",&c);

for(i=0;i<r;i++){
    *(p+i)=(int *)malloc(c*sizeof(int));
}
for(i=0;i<r;i++){
    printf("enter row: %d\n",i);
    for(j=0;j<c;j++){
        scanf("%d",(*(p+i)+j));
    }
}


for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",*(*(p+i)+j));
    }

    printf("\n");
}
}