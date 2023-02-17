//sumof array elements using pointers

#include<stdio.h>
#include<conio.h>
void  main(){
 
int *p,a[100],size,i,sum=0;
printf("enter size of array\n");
scanf("%d",&size);
for(i=0;i<size;i++){
    printf("enter array elements %d:\n",i);
    scanf("%d",p+i);
}


for(i=0;i<size;i++){
    
    sum=sum+*(p+i);
}
printf("%d\n",sum);


}
