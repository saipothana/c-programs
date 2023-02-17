//linear search using pointers

#include<stdio.h>
#include<conio.h>
void main(){
    int *p,i,search,size;
   printf("enter size\n");
   scanf("%d",&size);
   for(i=0;i<size;i++){
    printf("enter element:%d\n",i);
    scanf("%d",(p+i));
   } 

   printf("enter search ele\n");
   scanf("%d",&search);

   for(i=0;i<size;i++){
    if(*(p+i)==search){
        break;
    }
   }

   if(i<size){
    printf("the element %d is fouunf is %d position",search,i);
   }
   else{
    printf("not found");
   }
}