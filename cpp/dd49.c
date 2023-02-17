//update elements

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],i,j,k,in[100],val[100],r,c;
    printf("enter r\n");
    scanf("%d",&r);
    printf("Enter c\n");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        printf("enter row: %d\n",i);
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            
        }
    }
    for(i=0;i<r;i++){
        printf("enter index\n");
        scanf("%d",&in[i]);
    }

    for(i=0;i<r;i++){
        printf("enter val\n");
        scanf("%d",&val[i]);
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(j==in[i]){
                a[i][in[i]]=val[i];
                break;
            }
        }
    }

     for(i=0;i<r;i++){
        
        for(j=0;j<c;j++){
printf("%d ",a[i][j]);
        }
        printf("\n");
     }
}