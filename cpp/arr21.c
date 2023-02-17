//binary search  ...we have to use while loop when repettions happen
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size,low=0,high=0,mid=0,i,search;
    printf("enter a");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter array %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("enter search\n");
    scanf("%d",&search);
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(search==a[mid]){
            break;
        }
        else if(search>a[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low<=high){//we have to check the condition we can do this by using flag
printf("%d found in  %d",search,mid);
    }
}