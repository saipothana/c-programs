//even and odd sum
#include<stdio.h>
#include<conio.h>
void main(){
    int size,i,es=0,os=0,s=0;
    int a[100];
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
printf("enter element %d:\n",i);
scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){ 
        s=s+a[i];   
        if(a[i]%2==0){
            es=es+a[i];
        }
else{
    os=os+a[i];
}
        
    }
    printf("the evensum of emements is %d\n",es);
    printf("the odd sum is %d",os);
    printf("the sum is %d",s);
    getch();
}