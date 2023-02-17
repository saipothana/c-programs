//left rotation  ---delete logic
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
b=a[0];
for(i=0;i<size;i++){
    a[i]=a[i+1];
}
a[size-1]=b;
printf("after rotate\n");
for(i=0;i<size;i++){
    printf("%d\n",a[i]);
}
}