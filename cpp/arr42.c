//b-a directly

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

for(i=0;i<size2;i++){
    for(j=0;j<size1;j++){
        if(b[i]==a[j]){
            for(k=0;k<size2;k++){
                b[k]=b[k+1];
            }
            size2--;
            j--;
        }
    }
}

printf("b-a: {");
    for(i=0;i<size2;i++){
        
        printf("%d,",b[i]);
    }
     printf("\b}\n");



}
