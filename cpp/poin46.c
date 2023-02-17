//generate cube of num

#include<stdio.h>

int *sq(int *a,int *b){
  static int i,s=1;
    for(i=1;i<=*b;i++){
        s=s * *a;
    }
    return &s;  //fun not returns the address of static variable so thats why we use static
}
void main(){
    int x,y;
     printf("enter x,y\n");
    scanf("%d %d",&x,&y);

    int *z=sq(&x,&y);
    printf("%d",*z);
}