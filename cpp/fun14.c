//evensum and odd sum of array using  type-2 functions

#include<stdio.h>
#include<conio.h>
void sum(int a[100],int size);
void sum(int a[100],int size){
    int i,es=0,os=0,s=0;
    
       for(i=0;i<size;i++){ 
        s=s+a[i];   
        if(a[i]%2==0){
            es=es+a[i];
        }
else if(a[i]%2!=0){
    os=os+a[i];
}
        
    }
     printf("the evensum of emements is %d\n",es);
    printf("the odd sum is %d",os);
    printf("the sum is %d",s);

}

void main(){
int a[100],size;
int i;
printf("enter size\n");
scanf("%d",&size);
for(i=0;i<size;i++){
    printf("enter ele:%d\n",i);
    scanf("%d",&a[i]);
}

for(i=0;i<size;i++){
    printf("element a[%d] is %d\n",i,a[i]);
   
}
sum(a,size);

}