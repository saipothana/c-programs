//printing 1 t0 100 numbers

#include<stdio.h>
#include<conio.h>
int pri(int n){
    if(n>n){
        return 0;
    }
    else{
        printf("%d\n",n);
        return (pri(n+1));
    }
}
void main(){
int n;
printf("enter n\n");
scanf("%d",&n);
pri(n);


}