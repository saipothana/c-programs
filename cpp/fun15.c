//es and os ussing array

#include<stdio.h>
#include<conio.h>
int even(int a[100],int size);

int odd(int a[100],int size);

int even(int a[100],int size){
    int i,es=0;
    for(i=0;i<size;i++){
        if(a[i]%2==0){
        es=es+a[i];
    }
    }
    return es;
}
int odd(int a[100],int size){

 int i,os=0;
    for(i=0;i<size;i++){
        if(a[i]%2!=0){
        os=os+a[i];
    }
    }
    return os;
}

void main(){
int a[100],size,i;
printf("enter size\n");
scanf("%d",&size);

for(i=0;i<size;i++){
    printf("enter element %d:\n");
    scanf("%d",&a[i]);
}

for(i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
}

printf("the es is %d\n",even(a,size));

printf("the os is %d\n",odd(a,size));

}