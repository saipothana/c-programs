//bubble sort       sort side by side
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size,i,j,t;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter array: %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("before sort");
    for(i=0;i<size;i++){
        printf("a[%d]=%d\n",i,a[i]);
}
for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(a[i]>a[j]){
           t=a[i];
           a[i]=a[j];
           a[j]=t;
        }
        else{
            a[i]=a[i];
        }
    }

}
printf("after sort");
for(i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
}
}
