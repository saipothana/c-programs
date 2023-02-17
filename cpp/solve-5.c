//https://leetcode.com/problems/two-sum/

/*

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/

#include<stdio.h>
#include<conio.h>

void main(){
    int a[100],size,target,i,j,k;

    printf("enter size\n");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter ele :%d\n",i);
        scanf("%d",&a[i]);
    }
    printf("enter target\n");
    scanf("%d",&target);

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]+a[j]==target){
                printf("[%d %d]\n",i,j);
                break;
            }
        }
    }
}