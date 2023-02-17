//sum of ele in row wise and max and min of ele in rowwose
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
/*logic for sum of ele
for(i=0;i<r;i++){
    sum=0;
    for(j=0;j<c;j++){
        printf("%d ",*(*(a+i)+j));
        sum=sum+*(*(a+i)+j);
    }
    printf("%d",sum);
    printf("\n");
}

*/

for(i=0;i<r;i++){
    max=*(*(a+i)+0);
    min=*(*(a+i)+0);
    for(j=0;j<c;j++){
       printf("%d ",*(*(a+i)+j));  
        if(max<*(*(a+i)+j)){
            max=*(*(a+i)+j);
        }
        if(min>*(*(a+i)+j)){
            min=*(*(a+i)+j);
        }
    }
         printf("max=%d,min=%d",max,min);
    printf("\n"); 
    }

}















