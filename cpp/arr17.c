//reverse array
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],i,size;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
printf("enter element %d\n",i);
scanf("%d",&a[i]);
    }
printf("array before reverse\n");
   for(i=0;i<size;i++){
printf("a[%d]=%d\n",i,a[i]);
}

printf("array after reverse\n");
   for(i=size-1;i>=0;i--){
printf("a[%d]=%d\n",i,a[i]);
}
getch();
}