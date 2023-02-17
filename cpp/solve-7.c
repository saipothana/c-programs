//https://leetcode.com/problems/median-of-two-sorted-arrays/

//https://leetcode.com/problems/container-with-most-water/

/*
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void input(int *arr,int n);
void print(int *arr,int n);

void merge(int *arr,int *brr,int *crr,int n1,int n2,int n3);

double median(int *arr,int n3);


void input(int *arr,int n){
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
}
void print(int *arr,int n){
    int i,j;
    printf("[ ");
    for(i=0;i<n;i++){
        printf("%d",*(arr+i));
    }
    printf("] ");
}

void merge(int *arr,int *brr,int *crr,int n1,int n2,int n3){
    int i,j,k=0;
    for(i=0;i<n1;i++){
        *(crr+k++)=*(arr+i);
    }

    for(j=0;j<n2;j++){
        *(crr+k++)=*(brr+j);
    }

   

}

double median(int *arr,int n){
int i,j,k=0,temp;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(*(arr+i)>*(arr+j)){
temp=*(arr+i);
*(arr+i)=*(arr+j);
*(arr+j)=temp;
        }
    }
}

printf("[ ");
for(i=0;i<n;i++){
    printf("%d",*(arr+i));
}

printf(" ]");

if(n%2!=0){
   i= ((n+1)/2)-1;

   printf("\t%d printed in methed itself\n",*(arr+i));

 return *(arr+i);
}
else if(n%2==0){
    i=(n/2)-1;

  

    printf("%d %d\t\t\t\n",*(arr+i),*(arr+i+1));

int c= *(arr+i)+*(arr+i+1);

printf("%lf\tprinted in method itself\n",((double)c/2.0));




    return ((double )c/2.0);
}




}

void main(){
    int *arr,*brr,*crr,i,j,k,n1,n2,n3;
    printf("enter n1\n");
    scanf("%d",&n1);

    printf("enter n2\n");
    scanf("%d",&n2);

n3=n1+n2;
    arr=(int *)malloc(sizeof(int)*n1);

    brr=(int *)malloc(sizeof(int)*n2);

    crr=(int *)malloc(sizeof(int)*n3);

    input(arr,n1);
    print(arr,n1);
    input(brr,n2);
    print(brr,n2);
    merge(arr,brr,crr,n1,n2,n3);

    print(crr,n3);
    double z=median(crr,n3);

    printf("%lf",z);

}

