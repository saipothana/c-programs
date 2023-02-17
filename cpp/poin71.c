//search elements in  c using pointers

#include<stdio.h>
#include<stdlib.h>
void input(int *arr,int size);
void print(int *arr,int size);
int search(int *arr,int size,int *sr);

void input(int *arr,int size){
    int *b=(arr+(size-1));
    int i=0;
    while(arr<=b){
        printf("enter arr1 %d\n",i++);
        scanf("%d",arr);
        arr++;
    }
}

void print(int *arr,int size){
    int *b=(arr+(size-1));
    int i=0;
    while(arr<=b){
        printf("%d",*arr);
        arr++;
    }
}

int search(int *arr,int size,int *sr){
    int i=0;
   /* for(i=0;i<size;i++){
        if(*(arr+i)==*sr){
            break;
        }
    }
    */
   while(*(arr)!=*(sr)){
    arr++;
    i++;
   }
if(*arr==*sr){
    return i;
}
}


  
void main(){
   int a[100],size,sr;
   printf("enter asize\n");
   scanf("%d",&size);
   printf("enter sr\n");
   scanf("%d",&sr);
   int *p1=a;
   p1=(int *)malloc(size * sizeof(int)); 
input(a,size);
print(a,size);
printf("after seach");

printf("%d found in %d th loc\n",sr,search(a,size,&sr));

}