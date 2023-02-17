
/*
3
2
3
1
5

Sample Output 1

NO

Explanation 1

Given the array[2,3,1] and k = 5. There is no element 5 in the array and therefore we print “NO”.

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void search(int *arr,int n,int sr){
    int i;
    for(i=0;i<n;i++){
        if(*(arr+i)==sr){
            break;
        }
    }

    if(i<n){
        printf("Yes\n");
    }
    else{
        printf("No");
    }
}
void main(){

    int *arr,n,number,i,j;
    printf("enter n\n");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        printf("enter num %d:\n",i);
        scanf("%d",(arr+i));
    }
 printf("enter number\n");
    scanf("%d",&number);
    search(arr,n,number);
    
}