//sorting by pointers
#include<stdio.h>
#include<conio.h>
void main(){
    int *p,i,j,size;
    printf("enter size:");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        printf("enter elementes:%d\n",i);
        scanf("%d",p+i);

    }

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(*(p+i)>*(p+j)){
                *(p+i)=*(p+i)+*(p+j);
                *(p+j)=*(p+i)-*(p+j);
                *(p+i)=*(p+i)-*(p+j);            }
        }
    }


    printf("after sort:\n");

    for(i=0;i<size;i++){

        printf("%d ",*(p+i));
}

}
