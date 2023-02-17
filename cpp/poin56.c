//delete dub

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){

 int **a,i,j,k,r,c,p;
    a=(int **)malloc(sizeof(int *)*r);

    for(i=0;i<r;i++){
        *(a+i)=(int *)malloc(sizeof(int)*c);
    }

    

    for(i=0;i<r;i++){
        printf("enter r %d:\n",i);
        for(j=0;j<c;j++){
            printf("enter col %d:\n",j);
            scanf("%d"(*(a+i)+j));
        }
    }


    for(i=0;i<r;i++){
        for(j=i+1;j<c;j++){
            for(k=i;k<c;k++){
                if(*(*(a+i)+j)==*(*(a+j)+k)){
                    for(p=i;p<c;p++){
                        *(*(a+i)+p)=*(*(a+i)+p+1);
                    }
                    c--;
                    k--;
                  
        }
    }
}
    }

    for(i=0;i<r;i++){
    for(j=0;j<=c;j++){
        printf("%d",*(*(a+i)+j));
    }
    printf("\n");
}

}