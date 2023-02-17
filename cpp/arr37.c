


// union of two sets  ..if i want to gets final sets sorted

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
        c[size3++]=a[i];
        printf("%d,",a[i]);
    }
    printf("\b}\n");
    printf("arr 2: {");
    for(i=0;i<size2;i++){
        c[size3++]=b[i];
        printf("%d,",b[i]);
    }
     printf("\b}\n");

     for(i=0;i<size3;i++){
        for(j=i+1;j<size3;j++){
if(c[i]>c[j]){
   c[i]=c[i]+c[j];
   c[j]=c[i]-c[j];
   c[i]=c[i]-c[j];
}
        }
}

      for(i=0;i<size3;i++){
        for(j=i+1;j<size3;j++){
            if(c[i]==c[j]){
                for(k=i;k<size3;k++){
                    c[k]=c[k+1];
                  
                
                }
                size3--;
                j--;//first i compare with i(i==j) and since if we found thw0  similar then we have to decrement      
                  
             }
           
        }
    }
     printf("union {");
   for(i=0;i<size3;i++){  
    printf("%d,",c[i]);
   }
   printf("\b}\n");
   getch();
    
}