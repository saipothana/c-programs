//lcm using recursion

#include<stdio.h>
#include<conio.h>
int lcm(int a,int b){
static int i=0;
i=i+a; 
   if(i%a==0 && i%b==0){
return i;
   }
   else{
    return lcm(a,b);
   }

}
    

void main(){
int a,b,c;
printf("Enter a and b\n");
scanf("%d %d",&a,&b);
printf("%d",lcm(a,b));
}