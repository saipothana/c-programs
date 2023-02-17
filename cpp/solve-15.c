//nth max in array  --persistent coding 

/*
Input

5  3
11 -1 – 4 12 -6

Output 

-1

Explanation :

-1 is 3rd largest

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input(int *arr,int n);
void input(int *arr,int n);
int *sort(int *arr,int n);
void input(int *arr,int n){
int i;
for(i=0;i<n;i++){
    printf("enter ele:%d\n",i);
    scanf("%d",(arr+i));
}
}
void print(int *arr,int n){

    int *brr=(arr+n-1);
    while(arr<=brr){
        printf("%d",*arr++);
    }

}

    int *sort(int *arr,int n){
        int *brr=(int *)malloc(sizeof(int)*n);
        int i,j,temp;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(*(arr+i)<*(arr+j)){
                  temp=*(arr+i);
                  *(arr+i)=*(arr+j);
                  *(arr+j)=temp;  

                }
            }
        }

        

        return arr;
    }



void main(){
    int *arr,n,number,i,j;
    printf("enter n\n");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);

    input(arr,n);
    print(arr,n);
printf("\n");
    printf("enter number\n");
    scanf("%d",&number);

    int *z=sort(arr,n);
  /*
   for(i=0;i<n;i++){
    if(i==number-1){
        printf("%d\n",*(z+i));
        break;
    }
   }

   */

   printf("%d",*(z+(number-1)));

}

