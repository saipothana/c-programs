

//copy of array using var

#include<stdio.h>
#include<conio.h>
void main(){
    int i,a[100],b[100],size1,size2=0;
printf("enter size1");
scanf("%d",&size1);
for(i=0;i<size1;i++){
    printf("enter element: %d\n",i);
    scanf("%d",&a[i]);
}
for(i=0;i<size1;i++){
    b[size2++]=a[i];
    printf("the a[%d] =%d\n",i,a[i]);
    printf("the copy b[%d]=%d\n",i,b[i]);
}
getch();
}