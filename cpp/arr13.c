//merge of array
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],b[100],c[100],size1,size2,i,size3=0;
    printf("enter size1");
    scanf("%d",&size1);
for(i=0;i<size1;i++){
    printf("enter array %d",i);
    scanf("%d",&a[i]);
}
printf("enter size2");
scanf("%d",&size2);
for(i=0;i<size1;i++){
    printf("enter array %d",i);
    scanf("%d",&b[i]);
}
for(i=0;i<size1;i++){
    c[size3++]=a[i];
     printf("the first a[%d]=%d\n",i,a[i]);
}
for(i=0;i<size2;i++){
    c[size3++]=b[i];
    printf("the second b[%d]=%d\n",i,b[i]);
}
for(i=0;i<size3;i++){
    printf("the merge c[%d]=%d\n",i,c[i]);
}
//getch();
}


