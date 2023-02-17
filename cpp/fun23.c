//max and min of arr

#include<stdio.h>
#include<conio.h>
int max(int a[100],int size);
int max(int a[100],int size){
    int mx,mn,i;
    mx=a[0];
    mn=a[0];
    for(i=0;i<size;i++){
        if(a[i]>mx){
            mx=a[i];
        }
        else if(a[i]<mn){
            mn=a[i];
        }
    }
    return mn;
}
void main(){
 int i,a[100],size;

    printf("enter size\n");
scanf("%d",&size);

for(i=0;i<size;i++){
    printf("enter element %d:\n",i);
    scanf("%d",&a[i]);
} 
printf("the min=%d\n",max(a,size));
//printf("min=%d\n",max(a,size));
}