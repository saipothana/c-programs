//Write a C program to input elements in an array and reverse the array using pointers. How to reverse an array using pointers in C programming. Logic to reverse an array using pointers in C

#include<stdio.h>
#include<conio.h>
void read(int *a,int size);
void write(int *a,int size);
void rev(int *a,int size);

void read(int *a,int size){
    int i=0;
    int *b=(a+(size-1));

// this func used to take i/p from user
    while(a<=b){
        printf("enter element :%d\n",i++);
        scanf("%d",(a++));
    }
    
}

void write(int *a,int size){
     int i=0;
    int *b=(a+(size-1));

// this func used to display array
    while(a<=b){
        printf("%d\n",*(a++));
        
    }
    printf("\n");
}
/*void rev(int *a,int size){
    int i;
   // int *b;
  int *b=(a+(size-1));

  for(i=size-1;i>=0;i--){
    printf("%d",*(a+i));
  }

    
}*/

void rev(int *a,int size){
    int *c=&a[0];
    int *b=(a+(size-1));
    int i=0;
    while(b>=c){
     
       

b--;
c++;


    }
}
void main(){
    int a[100],size;
    printf("enter size\n");
    scanf("%d",&size);
    printf("enter array\n");

    read(a,size);
printf("before reverse\n");
    write(a,size);
 printf("after reverse\n");
    rev(a,size);
   write(a,size);
   


}