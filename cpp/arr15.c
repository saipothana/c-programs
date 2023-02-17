#include<stdio.h>
//if i want to separately print two arrays i create another variables  and perform operation 

#include<conio.h>
void main(){
    int a[100],b[100],c[100],size1,size2=0,size3=0,i;
printf("enter size");
scanf("%d",&size1);
for(i=0;i<size1;i++){
  printf("enter arry :%d\n",i);
  scanf("%d",&a[i]);  
}
for(i=0;i<size1;i++){
    if(a[i]%2==0){
        b[size2++]=a[i];
    }
    else{
        c[size3++]=a[i];
    }
}
for(i=0;i<size2;i++){
    printf("the even b[%d]=%d\n",i,b[i]);
}
for(i=0;i<size3;i++){
    printf("the odd c[%d]=%d\n",i,c[i]);
}
getch();
}