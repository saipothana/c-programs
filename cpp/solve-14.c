//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int avg(int *marks,char gender,int n);

int  avg(int *marks,char gender,int n){
   // printf("hi\n");
    int i,j,sum1=0;

    

    if(n>1){
        for(i=0;i<n;i++){
            if(gender=='g'){
                //printf("hi\n");
                if(i%2!=0){
sum1=sum1+*(marks+i);
                }
            }

            else if(gender=='b'){
                if(i%2==0){
                    sum1=sum1+*(marks+i);
                }
            }
        }
    }
    else{
        sum1=0;
    }


    return sum1;
}




void main(){

int *arr,i,j,k,n;
char ch;
//printf("enter n\n");
scanf("%d",&n);
arr=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++){
    scanf("%d",(arr+i));
}
//printf("enter char");
fflush(stdin);
scanf("%c",&ch);
int a=avg(arr,ch,n);
printf("%d\n",a);

}
