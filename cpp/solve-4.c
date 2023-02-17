//https://prepinsta.com/mindtree-coding-questions-and-answers/#

//Question: Airport authority

/*

Sample Input 1
4
1         (1>3)   false pay 1$
2
3
4          (4>3) true pay 2$
3
Sample Output 1
5

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void input(int *arr,int n);
void print(int *arr,int n);
int min(int *arr,int n,int t);
void input(int *arr,int n){
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
}
void print(int *arr,int n){
    int i,j;
    for(i=0;i<n;i++){
        printf("%d",*(arr+i));
    }
}

/*
int min(int *arr,int n,int t){
    int i,j,sum=0;
    for(i=0;i<n;i++){

        if(*(arr+i)<=t){
            sum=sum+1;
        }
        if(*(arr+i)>t){
            sum+=2;
        }
    }

    return sum;
}

*/

// optimised code for min method

int min(int *arr,int n,int t){
    int i,j,sum=0;
    for(i=0;i<n;i++){
sum++;
        
        if(*(arr+i)>t){
            sum++;
        }
    }

    return sum;
}


void main(){
    int *weight,luggage,treshold;
    printf("enter n\n");
    scanf("%d",&luggage);
    weight=(int *)malloc(sizeof(int)*luggage);

    input(weight,luggage);
    print(weight,luggage);

    printf("enter treshold\n");
    scanf("%d",&treshold);

    int boardingcost=min(weight,luggage,treshold);
    printf("%d",boardingcost);

}