//right rotate the array using function


#include<stdio.h>
#include<conio.h>
void rot(int a[100],int size);
void rot(int a[100],int size){
    int t,i;
    t=a[size-1];
    for(i=size-1;i>=0;i--){
        a[i+1]=a[i];
    }
    a[0]=t;

    for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    }

}
void main(){
 int i,a[100],size;

    printf("enter size\n");
scanf("%d",&size);

for(i=0;i<size;i++){
    printf("enter element %d:\n",i);
    scanf("%d",&a[i]);
} 
rot(a,size);

}