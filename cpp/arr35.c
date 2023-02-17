//max min

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],i,j,size,min,max;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter element: %d\n",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<size;i++){
     
            if(a[i]<min){
                min=a[i];
                
            }
             if(a[i]>max){
                max=a[i];
                
            }
            
        
    }
    printf("min=%d  max=%d",min,max);
    getch();
}