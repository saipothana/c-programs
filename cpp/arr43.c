//symmetric difference....--    {a-b}    U   {b-a}

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],b[100],c[100],d[100],size4=0,size1,size2,size3=0,i,j,k;
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
c[size3++]=a[i];
        }
    }
}


for(i=0;i<size2;i++){
    for(j=0;j<size1;j++){
        if(b[i]==a[j]){
        d[size4++]=b[i];
        }
    }
}


for(i=0;i<size1;i++){
        for(j=0;j<size3;j++){
            if(a[i]==c[j]){
               for(k=i;k<size1;k++){
                a[k]=a[k+1];
               }
                size1--;
                j--;
                }
        }
 }

for(i=0;i<size2;i++){
    for(j=0;j<size4;j++){
        if(b[i]==d[j]){
            for(k=0;k<size2;k++){
                b[k]=b[k+1];
            }
            size2--;
            j--;

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


int x[100],size5=0;
for(i=0;i<size1;i++){
    x[size5++]=a[i];
}

for(i=0;i<size2;i++){
    x[size5++]=b[i];
}

for(i=0;i<size5;i++){
    for(j=i+1;j<size5;j++){
        if(x[i]>x[j]){
            x[i]=x[i]+x[j];
            x[j]=x[i]-x[j];
            x[i]=x[i]-x[j];
        }
    }
}
for(i=0;i<size5;i++){
    for(j=i+1;j<size5;j++){
        if(x[i]==x[j])
        {
            for(k=i;k<size5;k++){
                x[k]=x[k+1];
            }
            size5--;
            j--;
        }
    }

}


printf("a-b U b-a: {");
    for(i=0;i<size5;i++){
        
        printf("%d,",x[i]);
    }
     printf("\b}\n");
}