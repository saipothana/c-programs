//static storage class--important

/*
these are local
>within the fun
>ram
>zero
>can maintain previous value
>scope:within the block
>life:throuout the pgm

>the var is only initialised once ...
*/

#include<stdio.h>
void fun(){
    static int x=0;        //since we declare static here it use one initialization--0 1 2 
    printf("%d\n",x++);  //if we do same ex with auto then the o/p will be 0 0 0 because here it initializes every time 
}
void main(){
fun();
fun();
fun();
}