//problem in code chef binary battles

#include<stdio.h>
#include<conio.h>
int square(int a);
int battle(int b,int c);
int square(int a){
    int i,j;
    for(i=0;i<=a;i++){
        if(i*i==a){
            break;
        }
       
    }
    printf("%d\n",i);
    return i;
}

int battle(int b,int c){
    int res;
    int a;
    int f=square(a);

  res=  f*b;
  
  return res;
}
void main(){
int a;
printf("enter a\n");
scanf("%d",&a);

int b,c;
printf("enter b c\n");
scanf("%d %d",&b,&c);
square(a);
printf("%d",battle(b,c));

}