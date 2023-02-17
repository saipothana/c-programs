//find power of x and y and return double

//type-3

#include<stdio.h>
#include<conio.h>
double power(int x,int y);
double power(int x,int y){
    float sum=1.0;
    if(y>=0){
    for(int i=1;i<=y;i++){
sum=sum*x;//sum=1*2=2 
//printf("%d\n",sum);
    }
   //return(sum);
}

else {
   for(int i=y;i<0;i++){ //-2 -1 
    sum=sum/x;
  printf("%f\n",sum);
}
//return(sum);
}
return sum;
}

void main(){
int var1,var2;
printf("enter x value:\t");
scanf("%d",&var1);
printf("enter y value:\t");
scanf("%d",&var2);
double pow=power(var1,var2);

printf("%d power %d is %lf\n",var1,var2,pow);


}


//code chef
second max of 3 num
#include <stdio.h>

int max(int a,int b,int c){
    if(a>b && a>c){
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
        
    if(b>a && b>c){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    
    if(c>a && c>b){
        if(a>b){
            return a;
        }
        else{
            return b;
        }
    }
}
int main(void) {
	int n;
	scanf("%d",&n);
	while(n--){
	    int a,b,c;
	    scanf("%d %d %d\n",&a,&b,&c);
	    int result =max(a,b,c);
	    printf("%d\n",result);
	}
	return 0;
}