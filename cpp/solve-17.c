//https://prepinsta.com/accenture/coding/



/**
 * Problem Description :

The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

Note:

Return -1 if the array is null
Return 0 if the total amount of food from all houses is not sufficient for all the rats.
Computed values lie within the integer range.
Example:

Input:

r: 7
unit: 2
n: 8
arr: 2 8 3 5 7 4 1 2
Output:

4

Explanation:

Total amount of food required for all rats = r * unit

= 7 * 2 = 14.

The amount of food in 1st houses = 2+8+3+5 = 18. Since, amount of food in 1st 4 houses is sufficient for all the rats. Thus, output is 4.


*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int count(int *arr,int n,int r,int u){
int i,j,sum=0;
for(i=0;i<n;i++){

    sum=sum+*(arr+i);
    if(sum>=(r*u)){
        break;
    }
}


if(n<=0){
    return -1;
}

else if(i<n){
    return i+1;
}
else{
    return 0;
}
 

}
void main(){
   int *arr,n,r,u,i,j;
   printf("enter r and u\n");
   scanf("%d %d",&r,&u);
   printf("enter n\n");
   scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        printf("enter num %d:\n",i);
        scanf("%d",(arr+i));
    } 

    int su=count(arr,n,r,u);
    printf("%d",su);
}