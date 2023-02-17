//sum and max of ele in colwis

#include<stdio.h>
#include<stdlib.h>

void main(){
    int **a,r,c,i,j,k,sum,max,min;
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
/* logic for add in col wise
for(i=0;i<r;i++){
    sum=0;
    for(j=0;j<c;j++){
                printf("%d ",*(*(a+i)+j));
        sum=sum+*(*(a+j)+i);
    }
    printf("%d",sum);
    printf("\n");
}
*/

for(i=0;i<r;i++){
    max=*(*(a+0)+i);
    min=*(*(a+0)+i);
    for(j=0;j<c;j++){
       printf("%d ",*(*(a+i)+j));  
        if(max<*(*(a+j)+i)){
            max=*(*(a+j)+i);
        }
        if(min>*(*(a+j)+i)){
            min=*(*(a+j)+i);
        }
    }
         printf("max=%d,min=%d",max,min);
    printf("\n"); 
    }

}




















