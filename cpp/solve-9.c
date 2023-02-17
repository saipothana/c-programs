/*

Case 1
Input: 4567
Expected Output: 2
Explanation : Odd positions are 4 and 6 as they are pos: 1 and pos: 3, both have sum 10. Similarly, 5 and 7 are at even positions pos: 2 and pos: 4 with sum 12. Thus, difference is 12 – 10 = 2

Case 2
Input: 5476
Expected Output: 2
Case 3
Input: 9834698765123
Expected Output: 1



*/


//the given solution is failing for more than 5 digits  so choose an alternative

#include<stdio.h>
#include<conio.h>
void main(){
    long a[100],b[100];
    long n,esum=0,osum=0,dif=0,k=1,i,j=1;
    

    printf("enter number greater than two digits\n");
    scanf("%ld",&n);


    while(n!=0){
        a[k++]=n%10;

        n/=10;
    }

    //

    for(i=1;i<k;i++){
        printf("%ld",a[i]);
    }

    for(i=k-1;i>=1;i--){
       
        b[j++]=a[i];
    }

    for(i=1;i<k;i++){
        if(i%2==0){
            esum=esum+b[i];
        }
        if(i%2!=0){
            osum=osum+b[i];
        }
    }

   

    if(esum<osum){
        esum=esum+osum;
        osum=esum-osum;
        esum=esum-osum;
       
    }

     

printf("\n");


    printf("the o/p is %ld",(esum-osum));


}