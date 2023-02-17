//return multiple val

//generate even numbers

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int *geteven(int *arr,int n){
    int i,j=0;
   
for(i=0;i<n;i++){
   *(arr+i)=2*(i+1);
   
}

return arr;

}
void main(){
int *arr,n,i;
printf("enter n\n");
scanf("%d",&n);
 arr=(int *)malloc(sizeof(int)*n);
geteven(arr,n);
for(i=0;i<n;i++){
    printf("%d\n",*(arr+i));
}
}