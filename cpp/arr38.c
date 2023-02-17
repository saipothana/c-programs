//intersection

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size1,b[100],size2,c[100],size3=0,i,j,k;
    printf("enter size 1\n");
    scanf("%d",&size1);
    for(i=0;i<size1;i++){
       printf("enter arr1: %d\n",i);
       scanf("%d",&a[i]);
    }

     printf("enter size 2\n");
    scanf("%d",&size2);
    for(i=0;i<size2;i++){
       printf("enter arr1: %d\n",i);
       scanf("%d",&b[i]);
    }
    printf("arr 1: {");
       for(i=0;i<size1;i++){
        
        printf("%d,",a[i]);
    }
    printf("\b}\n");
    printf("arr 2: {");
    for(i=0;i<size2;i++){
        
        printf("%d,",b[i]);
    }
     printf("\b}\n");



for(i=0;i<size1;i++){
        for(j=0;j<size2;j++){
         if(a[i]==b[j]){

         c[size3++]=a[i];
      
         }
         
        }
}
 printf("intersection : { ");
for(i=0;i<size3;i++){
   printf("%d,",c[i]);
}
     printf("\b}\n");
}


