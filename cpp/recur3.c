//print num from n to 1
#include<stdio.h>
#include<conio.h>
int pri(int n){
    if(n==0){
        return 0;
    }
    else{
        printf("%d\n",n);
        return pri(n-1);
    }
}
void main(){
int n;
printf("enter n\n");
scanf("%d",&n);
pri(n); //since it returning 0 if we print here
}