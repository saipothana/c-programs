//delete duplicates---sort+delete

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size,k,j,i;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter array: %d\n",i);
        scanf("%d",&a[i]);

    }
    printf("before deletion\n");
    for(i=0;i<size;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]==a[j]){
                for(k=i;k<size;k++){
                    a[k]=a[k+1];
                  
                
                }
                size--;
                j--;//first i compare with i(i==j) and since if we found thw0  similar then we have to decrement      
                  
             }
           
        }
    }

           
printf("after deletion");
    
     for(i=0;i<size;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    
getch();
}