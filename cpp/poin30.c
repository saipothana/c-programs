#include<stdio.h>

void swap(int a,int b);
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
printf("%d\n",a);  //here if we print up then it print but in down we not able to print
    printf("%d",b);

}
void main(){
    int x,y;
    printf("enter x and y\n");
    scanf("%d %d",&x,&y);

    swap(x,y);
  printf("%d\n",x);  //here if we print up then it print but in down we not able to print thus can be avoided by using pointers as args
    printf("%d",y); 
}