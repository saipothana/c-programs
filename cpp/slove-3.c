//https://prepinsta.com/mindtree-coding-questions-and-answers/#  -- in this link u can find this question


//Question: Self Sufficient


/*
Sample Input 1:

3

[3 4 2]

[5 3 4]

Sample Output 1:

3

*/

#include<stdio.h>
#include<conio.h>

void input(int arr[100],int n);
void print(int arr[100],int n);
int sum(int arr[100],int n);
void input(int arr[100],int n){
    int i,j;
  
    for(i=0;i<n;i++){
        printf("enter element %d",i);
        scanf("%d",&arr[i]);
    }
  
    printf("\n");
}

void print(int arr[100],int n){
    int i,j;
    printf("[ ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf(" ]");
    printf("\n");
}

int sum(int arr[100],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }

    return sum;              //so it is returning sum here
}


void main(){
    int n;
    int earnings[100],costofbook[100];

    printf("enter n\n");
    scanf("%d",&n);

    input(earnings,n);

    input(costofbook,n);
    print(earnings,n);

    
     print(costofbook,n);
     printf("\n");

int z=sum(costofbook,n)-sum(earnings,n);
printf("%d",z);

    

}

