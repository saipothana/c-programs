//find standard deviation ...first find mean

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float a[100],mean,variance,sum=0,b[100];
    int i,j,k,size;
printf("enter size\n");
scanf("%d",&size);
    for(i=1;i<=size;i++){
printf("enter ele %d:",i);
scanf("%f",&a[i]);
    }
//mean cal
    for(i=1;i<=size;i++){
        sum=sum+a[i];
    }
    printf("%f\n",sum);
    mean=sum/size;
printf("%f\n",mean);


sum=0;
//variance cal=  our elements - avg  =somevalue ----(somevalue*somevalue)------sum(somevalues)----sum/size-1 for variance and sum/size for standard deviation
for(i=1;i<=size;i++){
   a[i]=a[i]-mean;
  for(j=i;j<=i;j++){
b[i]=a[i]*a[i];
  }
}
for(i=1;i<=size;i++){
    printf("%f\n",b[i]);
}

for(i=1;i<=size;i++){
    sum=sum+b[i];
}
printf("%f\n",sum);
variance=sum/(size);
printf("var %.2f\n",variance);

//standard devia

printf("%f\n",sqrt(variance));
}
