//binary search using pointers
#include<stdio.h>
#include<conio.h>
void main(){
    int *p,i,search,size,low=0,mid,high;
   printf("enter size\n");
   scanf("%d",&size);
   high=size-1;
 for(i=0;i<size;i++){
    printf("enter element:%d\n",i);
    scanf("%d",(p+i));
   } 


   printf("enter search ele\n");
   scanf("%d",&search);

   while(low<=high){
    mid=(low+high)/2;
    if(*(p+mid)==search){
        break;
    }
    else if(*(p+mid)<search){
        low=mid+1;
    }
    else if(*(p+mid)>search){
        high=mid-1;
    }

    }

if(low<=high){
 printf("the element %d is fouunf is %d position",search,mid);   
}
else{
    printf("not found");
}
   }