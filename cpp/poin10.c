//array of pointers 
#include<stdio.h>
void main(){
int *p,i,a[5]={10,20,30,40,50};

p=&a[0];//if one declred as pointer all becomes that
for(i=0;i<5;i++){
printf("%d\n",*(p+i));     //p=&x[0]        p+1=&x[1]           p+2=&x[3]
 
}
printf("%d\n",*p);
p=p+2;//in p we have 1000 +2 not means 1002 +2  means add the sizeof(int)
printf("%d\n",*p);//p=p+2;;;;;;;;;;;prints the a[3]

}