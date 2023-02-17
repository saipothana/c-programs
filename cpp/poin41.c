//pointer as an arg

//reverse a num

#include<stdio.h>
int rev(int *n){
    int s=0;
    while(*n!=0){
s=s*10+ *n%10;
*n/=10;
    }
    return s;
}

void main(){
    int n;
    printf("enter num\n");
    scanf("%d",&n);
    int z=rev(&n);
    printf("%d",z);
}