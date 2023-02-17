//delete dublicates

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],i,j,k,p,r,c;
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
        for(j=0;j<c;j++){
            for(k=j+1;k<c;k++){
                if(a[i][j]==a[i][k]){
                    for(p=j;p<c;p++){
                        a[i][p]=a[i][p+1];
                    }
                    c--;
                   
                }
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