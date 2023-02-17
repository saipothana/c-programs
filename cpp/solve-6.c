//https://leetcode.com/problems/two-sum/

/*

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/

//solving same problem using pointers

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input(int *arr,int n);
void print(int *arr,int n);

int *twosum(int *arr,int n,int t);
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

int *twosum(int *arr,int n,int t){
    int i,j,k;

int *brr=(int *)malloc(sizeof(int)*2);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if(*(arr+i)+*(arr+j)==t){

*(brr+0)=i;
*(brr+1)=j;
return brr;
           }
        }
    }

   
    

}




void main(){
 int *arr,n,t,i;
 printf("enter n\n");
 scanf("%d",&n);
 arr=(int *)malloc(sizeof(int)*n);

 input(arr,n);
 print(arr,n);   
printf("enter target\n");
scanf("%d",&t);
int *brr=twosum(arr,n,t);
printf("[");
for(i=0;i<2;i++){
    printf("%d ",*(brr+i));
}

printf("]");
}





















/*
int* twoSum(int* nums, int numsSize, int target, int* returnSize){    
    *returnSize = 2;
    int* element = (int*)malloc(2*sizeof(int));

    for(int i=0; i<numsSize; i++)
        for(int j=i+1; j<numsSize; j++)
            if(nums[j] == target - nums[i])
            {
                printf("i = %d, j = %d\n", i, j);
                element[0] = i;
                element[1] = j;
                return element;                
            }
    // Return [-1,-1] if no result
    printf("No result with specified target\n");
    element[0] = -1;
    element[1] = -1;
    return element;
}

*/