//scalar matrix

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


for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        for(k=0;k<c-1;k++){
           // printf("it comes here\n");
            if(i==k && *(*(a+i)+k)!=*(*(a+i+1)+k+1)){  //here add 1 byte means we are adding size of int so thats why it shows not scalar
break;
            }
else if(i!=j && *(*(a+i)+j)!=0){
   
    break;
}
            }
        }
    }




if(i==r&&j==c){
    printf(" sca\n");
}
else{
    printf("not scalar\n");
}
}