//binsry search

//merge two arrays

//binary to deci

//union

//intersectiom

//minus

//symmetric diff

//left rotate

//Binary search

#include<stdio.h>
void main(){
    int *p,a[100],size,i,j,low,mid,high,sr,flag=1;
    p=&a[0];
printf("enter size\n");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        printf("enter element: %d\n",i);
        scanf("%d",(p+i));
  }
    printf("enter sr\n");
    scanf("%d",&sr);

    low=0;
    high=size-1;

    while(low<=high){
        mid=(low+high)/2;
if(*(p+mid)==sr){
    //printf(" %d element found in position mid %d",a[mid],mid);
    flag=0;
    break;
}
else if(sr<*(p+mid)){  //p=a[0]            p+1=a[1]======*p[0]==elemnt in a[o]
high=mid-1;
}
else if(sr>*(p+mid)){
    low=mid+1;
}

}

if(flag==0){
  printf(" %d element found in position  %d\n",sr,mid);  
}
else{
    printf("not found\n");
}


}

