//find lcm of two numbers by passing pointers as an arg to the fun

#include<stdio.h>
 int lcm(int *a,int *b);
 int lcm(int *a,int *b){
  int i=*a+1;
    while(i>0){
   
   if(i%*a==0&&i%*b==0){
   // printf("hi %d",i);
    return i;
    break;
   }
   i++;
    }
    

 }
 void main(){
    int i,j;
    printf("enter two val:\n");
    scanf("%d %d",&i,&j);

    int res=lcm(&i,&j);
    printf("%d",res);
 }