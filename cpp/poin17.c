//intersection

#include<stdio.h>
#include<conio.h>
void main(){
     int *p1,*p2,*p3,a[100],size1,size2,b[100],c[100],size3=0,i,j;
    
     printf("enter size1\n");
    scanf("%d",&size1);

     printf("enter size2\n");
    scanf("%d",&size2);
p1=&a[0];
p2=&b[0];
p3=&c[0];

    for(i=0;i<size1;i++){
        printf("enter element: %d\n",i);
        scanf("%d",(p1+i));
  }
 for(i=0;i<size2;i++){
        printf("enter element: %d\n",i);
        scanf("%d",(p2+i));
  }
  printf("==============\n");
 for(i=0;i<size1;i++){
    for(j=0;j<size2;j++){
        if(*(p1+i)==*(p2+j)){
            *(p3+size3++)=*(p1+i);
            
                    }
    }
 }

 for(i=0;i<size3;i++){
    printf("%d",*(p3+i));
 }
}