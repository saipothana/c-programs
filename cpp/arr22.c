#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size,i;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter array %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("before sort\n");
for(i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
}
printf("after sort\n");

}