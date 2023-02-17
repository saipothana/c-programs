
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int **a,**sum,i,j,k,r,c;

    printf("enter r and c\n");
    scanf("%d %d",&r,&c);

    a=(int **)malloc(sizeof(int *)*r);
for(i=0;i<r;i++){
    *(a+i)=(int *)malloc(sizeof(int)*c);
}

for(i=0;i<r;i++){
    printf("enter row %d:\n",i);
    for(j=0;j<c;j++){
printf("enter col %d:\n",j);
scanf("%d",(*(a+i)+j));
    }
}


for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        *(*(sum+i)+j)=0;
        for(k=0;k<c;k++){
            *(*(sum+i)+j)=*(*(sum+i)+j)+*(*(a+i)+k) * *(*(a+k)+j);
        }
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",*(*(a+i)+j));
    }
    printf("\n");
}
printf("=============b=========\n");

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",*(*(sum+i)+j));
    }
    printf("\n");
}


for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(*(*(a+i)+j)!=*(*(sum+i)+j)){
break;
        }
    }
}


if(i==r&&j==c){
    printf("idem\n");

}
else{
    printf("not\n");
}



}