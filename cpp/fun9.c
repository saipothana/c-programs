//armstrong check

#include<stdio.h>
#include<conio.h>
int arm(int n);
int arm(int n){
    int r;
    int sum=0;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    return sum;
}
void main(){
   int num;
   printf("enter num\n");
   scanf("%d",&num);
   if(num==arm(num)) {
    printf("%d is arm",num);
   }
   else{
    printf("not arm\n");
   }
}