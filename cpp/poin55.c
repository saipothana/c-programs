//insert ele in array
#include<stdio.h>
#include<stdlib.h>
void main(){
    int **a,*in,*val,i,j,k,r,c;
    a=(int **)malloc(sizeof(int *)*r);

    for(i=0;i<r;i++){
        *(a+i)=(int *)malloc(sizeof(int)*c);
    }

    

    for(i=0;i<r;i++){
        printf("enter r %d:\n",i);
        for(j=0;j<c;j++){
            printf("enter col %d:\n",j);
            scanf("%d",(*(a+i)+j));
        }
    }
in=(int *)malloc(sizeof(int)*r);

    val=(int *)malloc(sizeof(int)*r);


    for(i=0;i<r;i++){
        printf("enter in %d:\n",i);
        scanf("%d",(in+i));
    }

    for(i=0;i<r;i++){
        printf("enter var %d:\n",i);
        scanf("%d",(val+i));
    }

    for(i=0;i<r;i++){
        for(j=c-1;j>=*(in+i);j--){
          *(*(a+i)+j)=*(*(a+i)+j);
        }

        *(*(a+i)+*(in+i))=*(val+i);
    }


for(i=0;i<r;i++){
    for(j=0;j<=c;j++){
        printf("%d",*(*(a+i)+j));
    }
    printf("\n");
}
}