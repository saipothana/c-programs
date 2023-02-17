//reversea array with index using function

#include<stdio.h>
#include<conio.h>
void rev(int a[100],int size);
void rev(int a[100],int size){
    int i,j=0;
    for(i=size-1;i>=0;i--){


        printf("a[%d]=%d\n",j++,a[i]);
    }
}

void main(){
int a[100],size,i;
printf("enter size\n");
scanf("%d",&size);

for(i=0;i<size;i++){
    printf("enter element %d:\n",i);
    scanf("%d",&a[i]);
}
for(i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);

}
rev(a,size);
}