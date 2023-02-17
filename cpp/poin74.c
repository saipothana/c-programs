//multiply two numbers using pointers using funs

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input(int **arr,int *r,int *c);
void print(int **arr,int *r,int *c);
void mul(int **arr,int **brr,int **crr,int *r,int *c);

void input(int **arr,int *r,int *c){
    int i,j;
for(i=0;i<*r;i++){
    printf("enter row %d\n",i);
    for(j=0;j<*c;j++){
        
scanf("%d",(*(arr+i)+j));

            }
}
}
void print(int **arr,int *r,int *c){
    int i,j;
for(i=0;i<*r;i++){
    
    for(j=0;j<*c;j++){
printf("%d ",*(*(arr+i)+j));
}
printf("\n");
}

}

void mul(int **arr,int **brr,int **crr,int *r,int *c){
  
int i,j,k;
//printf("%d hi\t %d\n",*r,*c);
    for(i=0;i<*r;i++){
        
        for(j=0;j<*c;j++){

            *(*(crr+i)+j)=0;
            for(k=0;k<*c;k++){
      *(*(crr+i)+j)= *(*(crr+i)+j)+ *(*(arr+i)+k) * *(*(brr+k)+j);
        //printf("%d",*(*(crr+i)+j));
        
            }
        }
        printf("\n");
    }
   //print(crr,&r,&c);

}


void main(){
int **arr,**brr,r,c,**crr;
int i,j,k;
printf("enter r and c\n");
scanf("%d %d",&r,&c);
arr=(int **)malloc(sizeof(int *)*r);

for(i=0;i<r;i++){
    *(arr+i)=(int *)malloc(sizeof(int)*c);
}
brr=(int **)malloc(sizeof(int *)*r);

for(i=0;i<r;i++){
    *(brr+i)=(int *)malloc(sizeof(int)*c);
}

crr=(int **)malloc(sizeof(int *)*r);

for(i=0;i<r;i++){
    *(crr+i)=(int *)malloc(sizeof(int)*c);
}


printf("array 1\n");
input(arr,&r,&c);
print(arr,&r,&c);



printf("array 2\n");
input(brr,&r,&c);
print(brr,&r,&c);
printf("add arr\n");
mul(arr,brr,crr,&r,&c);

print(crr,&r,&c);

}