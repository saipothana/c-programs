#include<stdio.h>


void cal(int n,int b){
    int i,j,max1=0,max2=0,max3=0;
   // r=(int *)malloc(sizeof(int)*n*2);

  

    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
         if ((i&j) < b && (i&j) >= max1) {
            max1 = i&j;
            }
         if ((i|j) < b && (i|j) >= max2) 
         {max2 = i|j;
         }
         if ((i^j) < b && (i^j) >= max3)
          {
            max3 = i^j;
            }

        }
    }

           printf("%d %d %d",max1,max2,max3);
            

            
        }
        
    

   

int main(){

int a,b;
printf("enter a and b\n");
scanf("%d %d",&a,&b);
if (a<b)  //exchange values of a and b if smaller input is given first
    { 
    a = a+b;
    b = a-b;
    a = a-b;
    }
   // printf("%d \t%d\n",a,b);
cal(a,b);



}