//min and max of elements


#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],i,j,size,min,max;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter element: %d\n",i);
        scanf("%d",&a[i]);
    }
min=a[0];
max=a[size-1];
for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
if(a[i]>a[j]){
    a[i]=a[i]+a[j];
    a[j]=a[i]-a[j];
    a[i]=a[i]-a[j];
}
    }
}
  //  printf("min=%d max=%d",a[0],a[size-1]);//this is for first max and min
printf("min=%d max=%d",a[1],a[size-2]);//this is for second max and min
}