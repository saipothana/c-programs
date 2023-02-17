//transpose 

//scalar

//lower trian'

//idempodent

//add in colwise

//max-min in colwise

//sort col

//insert

//del dup

//right rot in matrix

#include<stdio.h>
#include<stdlib.h>
void main(){

int **arr,**brr,i,j,k,r,c,size=0;
printf("enter row and col\n");
scanf("%d %d",&r,&c);

arr=(int **)malloc(r*sizeof(int *));
for(i=0;i<r;i++){
*(arr+i)=(int *)malloc(c*sizeof(int));
}

for(i=0;i<r;i++){
    printf("enter row: %d\n ",i);
    for(j=0;j<c;j++){
        printf("enter col: %d\n",j);
        scanf("%d",(*(arr+i)+j));
    }
}

printf("the normal mat\n");
for(i=0;i<r;i++){
   // printf("enter row: %d\n ",i);
    for(j=0;j<c;j++){
        printf("%d ",*(*(arr+i)+j));
    }
    printf("\n");
}


printf("the transpose\n");

for(i=0;i<c;i++){
    for(j=0;j<r;j++){
*(*(brr+i)+j)=*(*(arr+j)+i);
printf("%d ",*(*(brr+i)+j));
    }
    printf("\n");
}

for(i=0;i<c;i++){
    for(j=0;j<r;j++){
        printf("%d",*(*(brr+i)+j));
    }
    printf("\n");
}

}

