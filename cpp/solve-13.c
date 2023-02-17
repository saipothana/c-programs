//reverse array by returning array



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input(int *arr,int n);

void *rev(int *arr,int n);

void input(int *arr,int n){
    int i;
    int *brr=(arr+n-1);
    while(arr<=brr){
        scanf("%d",arr++);
    }
}



void *rev(int *arr,int n){

   int *brr=(int *)malloc(sizeof(int)*n);
   int i,j=0;
   for(i=n-1;i>=0;i--){
    *(brr+j++)=*(arr+i);
   }
   return brr;
}
void main(){
int *arr,n,i;
//printf("Enter n\n");
scanf("%d",&n);
arr=(int *)malloc(sizeof(int)*n);
input(arr,n);

int *z=rev(arr,n);
for(i=0;i<n;i++){
    printf("%d",*(z+i));
}


}