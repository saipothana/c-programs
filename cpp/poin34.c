//passing address of the var as an arg to the fun

#include<stdio.h>
#include<conio.h>


    int add(int *a);
    int add(int *a){
        return *a+10;
    }
    void main(){

int i;
printf("enter i\n"); //here we are passing the address of i 
scanf("%d",&i);
int z=add(&i);
printf("%d",z);
}