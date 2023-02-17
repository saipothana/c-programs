//a-b------a-(ainterb)  ---ex:{1,2}  {2,3,4}== {1,2}-{2}=  we find not common{1};
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],b[100],c[100],size1,size2,size3=0,i,j,k,d[100],size4=0;
    printf("enter size1");
    scanf("%d",&size1);
    for(i=0;i<size1;i++){
        printf("enter array1: %d\n",i);
        scanf("%d",&a[i]);
    }



     printf("enter size2");
    scanf("%d",&size2);
    for(i=0;i<size2;i++){
        printf("enter array2: %d\n",i);
        scanf("%d",&b[i]);
    }

 for(i=0;i<size1;i++){
        for(j=0;j<size2;j++){
            if(a[i]==b[j]){
               for(k=i;k<size1;k++){
                a[k]=a[k+1];
               }
                size1--;
                j--;
                }
        }
 }
              
printf("a-b: {");
    for(i=0;i<size1;i++){
        
        printf("%d,",a[i]);
    }
     printf("\b}\n");



}



