/*

2 2 2
2 1 2
2 2 2

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

*/

#include<stdio.h>

void main(){
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<(n-1)*2;i++){
        for(j=0;j<(n-1)*2;j++){
          if(i==0||i==n-1||j==0||j==n-1){
            printf("1");
          } 
          else{
            printf(" ");
          }


        }
       printf("\n");
    }
        
    }
