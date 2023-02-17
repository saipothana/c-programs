//lower triangle matrix
#include<stdio.h>
#include<stdlib.h>

void main(){
    int **a,r,c,i,j,k;
    printf("enter row\n");
    scanf("%d",&r);

    printf("enter col\n");
    scanf("%d",&c);

    a=(int **)malloc(r*sizeof(int *));
for(i=0;i<r;i++){
*(a+i)=(int *)malloc(c*sizeof(int));
}

for(i=0;i<r;i++){
    printf("enter row: %d\n ",i);
    for(j=0;j<c;j++){
        printf("enter col: %d\n",j);
        scanf("%d",(*(a+i)+j));
    }
}


/*for(i=0;i<j;i++){
    for(j=0;j<c;j++){
        if(i<j){
            *(*(a+i)+j)=0;
        }

    }
}
*/
/*
for(i=0;i<j;i++){
    for(j=0;j<c;j++){
    printf("%d",*(*(a+i)+j));
    }
    printf("\n");
}


}
*/
for(i=0;i<j;i++){
    for(j=0;j<c;j++){
        if(i<j && *(*(a+i)+j)!=0){
            break;
        }
       

    }
}

if(i==r&&j==c){
    printf("low\n");
}
else{
    printf("not low\n");
}
}