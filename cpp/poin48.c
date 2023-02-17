//dynamic memory allocation

// malloc:  (type*)malloc(byte-size);

//ex: (int*)malloc(n*sizeof(int));


//calloc:(type*)malloc(byte-size);

//ex: (int*)malloc(n*sizeof(int));


//realloc:  (type*)realloc(int *ptr,size);


//ex:using malloc

//reading amd writing the 2d array

#include<stdio.h>

#include<conio.h>
#include<stdlib.h>
void main(){
int **x;
int i,j,r,c;
printf("enter r and c\n");
scanf("%d %d",&r,&c);
x=(int **)malloc(r*sizeof(int *));  //we are allocation memory to row  it hold the address of other
for(i=0;i<r;i++){
     *(x+i) =  (int *)malloc(c * sizeof(int)); //pointer arithmetic //i have to use loop here because each row has n cols  //it holds the value at that loc
}

for(i=0;i<r;i++){
    printf("enter row %d:\n",i);
for(j=0;j<c;j++){
printf("enter col %d:\n",j);
   scanf("%d",(*(x+i)+j));
   }
}

printf("%d * %d mat is\n",r,c);

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("*(*(x+%d)+%d)=%d\n",i,j,*(*(x+i)+j));
    }
    printf("\n");
}

}

