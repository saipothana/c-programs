//rightt rotation  ---insrt logic
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size,b,i;
printf("enter size");
scanf("%d",&size);

for(i=0;i<size;i++){
printf("enter arr: %d\n",i);
scanf("%d",&a[i]);
}

printf("before rotate\n");
for(i=0;i<size;i++){
    printf("%d\n",a[i]);
}
b=a[size-1];
for(i=size-1;i>=0;i--){
    a[i+1]=a[i];
}
a[0]=b;
printf("after rotate\n");
for(i=0;i<size;i++){
    printf("%d\n",a[i]);
}
}