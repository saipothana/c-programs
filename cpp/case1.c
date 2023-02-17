//find median of the n numbers

#include<stdio.h>
#include<conio.h>
#define N 10;
void main(){
    float a[100],median;
    int i,j,k,size;
    printf("enter size\n");
    scanf("%d",&size);

    for(i=1;i<=size;i++){
        printf("enter ele: %d\n",i);
        scanf("%f",&a[i]);
    }
//sorting
    for(i=1;i<=size;i++){
        for(j=i+1;j<=size;j++){
            if(a[i]<a[j]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for(i=1;i<=size;i++){
        printf("a[%d]=%f\n",i,a[i]);

       
    }
    //median calculati :odd and even 
   // printf("%d\n",size);
    if(size%2==0){
        median=(a[size/2]+a[size/2+1])/2.0;
    }
    else{
        median=a[size/2+1];
    }
   
printf("%f\n",median);
}