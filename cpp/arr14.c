//split of array even and odd

#include<stdio.h>
#include<conio.h>
void main(){

    int a[100],size,i;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter elements: %d\n",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        if(a[i]%2==0){
            printf("the even array is a[%d]=%d",i,a[i]);
        }
        else{
           printf("the odd array is a[%d]=%d",i,a[i]); 
        }
    }
   getch(); 
}