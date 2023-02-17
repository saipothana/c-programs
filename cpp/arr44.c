//symmetry of two sets
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],b[100],c[100],size1,size2,size3=0,i,j,k;
     printf("enter size1:");
    scanf("%d",&size1);
    for(i=0;i<size1;i++){
    printf("enter arr1: %d\n",i);
scanf("%d",&a[i]);
}
 printf("enter size2:");
    scanf("%d",&size2);
    for(i=0;i<size2;i++){
    printf("enter arr2: %d\n",i);
scanf("%d",&b[i]);
}

for(i=0;i<size1;i++){
        for(j=0;j<size2;j++){
            if(a[i]==b[j]){
               for(k=i;k<size1;k++){
                a[k]=a[k+1];
               }
                size1--;

        
        for(k=j;k<size2;k++){//  if we use two sets like a and b seperately the a is changing so we use 2 as 1
            b[k]=b[k+1];
        }
        
        size2--;
        k--;
    }
}
}


printf("a-b: {");
    for(i=0;i<size1;i++){
        
        printf("%d,",a[i]);
    }
     printf("\b}\n");




printf("b-a: {");
    for(i=0;i<size2;i++){
        
        printf("%d,",b[i]);
    }
     printf("\b}\n");


for(i=0;i<size1;i++){
c[size3++]=a[i];
}
for(i=0;i<size2;i++){
c[size3++]=b[i];
}

for(i=0;i<size3;i++){
        for(j=i+1;j<size3;j++){
            if(c[i]==c[j]){
               for(k=i;k<size3;k++){
                c[k]=c[k+1];
               }
                size3--;
                j--;
            }
        }
}

printf("a-b U b-a: {");
    for(i=0;i<size3;i++){
        
        printf("%d,",c[i]);
    }
     printf("\b}\n");
}