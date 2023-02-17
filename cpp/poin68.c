//wap to printt an array using pointer as an arg  and copy one array into another

#include<stdio.h>
#include<conio.h>
int dis(int *arr,int size);
int dis(int *arr,int size){
    int i;

    
    for(i=0;i<size;i++){
        printf("%d",*(arr+i));
    }
    printf("\n");
}

void main(){


int a[100],b[100],size,i,j;
printf("enter size\n");
scanf("%d",&size);

int *p1=&a[0];
int *p2=b;
int *p3;
for(i=0;i<size;i++){
printf("enter array\n");
scanf("%d",(p1+i));
}
p3=&a[size-1];

while(p1<=p3){
    *p2=*p1;
    p2++;
    p1++;
}
printf("before copy\n");
dis(a,size);
printf("after copy\n");
dis(b,size);
}