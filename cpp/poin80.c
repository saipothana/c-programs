//sorting using pointers in arrays

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input(int *arr,int size);
void print(int *arr,int size);
void ascend(int *arr,int size);
void descend(int *arr,int size);
void input(int *arr,int size){
 int i=0;
    int *crr=(arr+(size-1));
    while(arr<=crr){
printf("enter array %d",i++);
scanf("%d",(arr));
arr++;
    }
}
void print(int *arr,int size){
    int i;
     int *crr=(arr+(size-1));
      while(arr<=crr){
        printf("%d ",*(arr++));
      }
    
}
void asscend(int *arr,int size){
    int i,j,k;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(*(arr+i)>*(arr+j)){
                k=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=k;

            }
        }
    }
}

void descend(int *arr,int size){
    int i,j,k;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(*(arr+i)<*(arr+j)){
                k=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=k;

            }
        }
    }
}
void main(){
int *arr,*brr,size,i,j,k;
printf("enter size\n");
scanf("%d",&size);
arr=(int *)malloc(sizeof(int)*size);
printf("the array before sort\n");
input(arr,size);
print(arr,size);
printf("the assend sort\n");
asscend(arr,size);
print(arr,size);


printf("\t\t\t descend sort\n");
descend(arr,size);
print(arr,size);
}

