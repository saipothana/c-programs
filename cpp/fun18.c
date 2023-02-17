#include<stdio.h>
#include<conio.h>
void prime(int a[100],int size);
void com(int a[100],int size);
void both(int a[100],int size);
void prime(int a[100],int size){
    int i,j,flag,size1=0,size2=0,size3=0,b[100],c[100];
   for(i=0;i<size;i++){
    flag=0;
for(j=1;j<=a[i];j++){
    if(a[i]%j==0){
        flag++;
    }
}
if(flag==2){
    a[size1++]=a[i];
}

else if(flag>2){
    b[size2++]=a[i];
}
else{
    c[size3++]=a[i];
}
   }
    for(i=0;i<size1;i++){
        printf("prime a[%d]=%d\n",i,a[i]);
    }
    for(i=0;i<size2;i++){
        printf("com b[%d]=%d\n",i,b[i]);
    }
    for(i=0;i<size3;i++){
        printf("bo c[%d]=%d\n",i,c[i]);
    }



}

void main(){
  
   int i,a[100],size;

    printf("enter size\n");
scanf("%d",&size);

for(i=0;i<size;i++){
    printf("enter element %d:\n",i);
    scanf("%d",&a[i]);
} 

prime(a,size);
}