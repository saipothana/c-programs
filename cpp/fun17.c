//display array elements'

#include<stdio.h>
#include<conio.h>
int *returnmarks();
int *returnmarks(int a[100],size){
static int marks[10]={50,11,12,3,4,5,90,66,77,88};
return(marks);
}
void main(){
    int *marks;
    int i;
    marks=returnmarks();
    for(i=0;i<10;i++){
        printf("%d\n",marks[i]);
    }
}