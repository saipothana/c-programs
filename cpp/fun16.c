//split the array based on prime como and both

#include<stdio.h>
#include<conio.h>

    int prime(int a[100],int size);
     int com(int a[100],int size);
      int both(int a[100],int size);

     int prime(int a[100],int size){
        int i,j,k,flag,size1=0;
         for(i=0;i<size;i++){
    flag=0;
for(j=1;j<=a[i];j++){
    if(a[i]%j==0){
        flag++;
    }
}
if(flag==2){
               // a[size1++]=a[i];
           // }
           // }
           printf("the %d\n",a[i]);
            return a[i];
        }

        }
     }

 int compo(int a[100],int size){
        int i,j,k,flag=0,size2=0;
        for(i=0;i<size;i++){
            for(j=0;j<i;j++){
if(a[i]%j==0){
    flag++;
}
            }
            if(flag>2){
                a[size2++]=a[i];
            }
        }
            return a[i];
        
        }

         int both(int a[100],int size){
        int i,j,k,flag=0,size3=0;
        for(i=0;i<size;i++){
            for(j=0;j<=a[i];j++){
if(a[i]%j==0){
    flag++;
}
            }
            if(flag<2){
                a[size3++]=a[i];
            }
            }
            return a[i];
        }

  void main(){
    int i,j,a[100],size;

    printf("enter size\n");
scanf("%d",&size);

for(i=0;i<size;i++){
    printf("enter element %d:\n",i);
    scanf("%d",&a[i]);
}

for(i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
}
int size1=0;
for(i=0;i<size;i++){
a[size1++]=prime(a,size);
}

for(i=0;i<size1;i++){
    printf("prime:a[%d]=%d\n",i,a[i]);
}

  }
