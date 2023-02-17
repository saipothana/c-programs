//extern: also called as global var

/* >works in all funs
>ram
>default:zero
>less privacy
>active throughout the pgm
*/


#include<stdio.h>
int x;
//printf("enter x\n");
//scanf("%d",&x);
void one(){
    x=x+1;
    printf("it is from fun1 from external\n");
    printf("%d\n",x);//34
}
void two(){
    int x=12;
    printf("%d\n",x++);  //local //12
}

void main(){
   extern int x;//here i declared a before and im using that a using extern keyword
    one();
    two();
}