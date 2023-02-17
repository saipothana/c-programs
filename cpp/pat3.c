#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,j,s,l;
    printf("enter n\n");
    scanf("%d",&n);
    for(i=-n;i<n;i++){
        if(i<0){
l=-i;
        }
        else{
l=i;
        }
        for(s=0;s<n-l;s++){
            printf("");
        }
        for(j=0;j<1+l;j++){
            printf("* ");
        }
        printf("\n");
    }
}