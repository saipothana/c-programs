//delete dublicates

#include<stdio.h>
#include<conio.h>
void main(){
    int *p,a[100],size,i,j,k;
     p=&a[0];
    printf("enter size\n");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter elemnt %d\n",i);
        scanf("%d",p+i);
    }

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(*(p+i)==*(p+j)){
                for(k=i;k<size;k++){
*(p+k)=*(p+k+1);
                }
                j--;
                size--;
            }
        }
    }

    for(i=0;i<size;i++){
        printf("%d\n",*(p+i));
    }
}