//split prime and compo array
#include<stdio.h>
//if i want to separately print two arrays i create another variables  and perform operation 

#include<conio.h>
void main(){
    int a[100],b[100],c[100],d[100],size1,size2=0,size3=0,size4=0,i,j,flag;
printf("enter size");
scanf("%d",&size1);
for(i=0;i<size1;i++){
  printf("enter arry :%d\n",i);
  scanf("%d",&a[i]);  
}

for(i=0;i<size1;i++){
    flag=0;
for(j=1;j<=a[i];j++){
    if(a[i]%j==0){
        flag++;
    }
}
if(flag==2){
    a[size2++]=a[i];
}
else if(flag>2){
    c[size3++]=a[i];
}
else{
    d[size4++]=a[i];
}
}
for(i=0;i<size2;i++){
printf("prime a[%d]=%d\n",i,a[i]);

}
for(i=0;i<size3;i++){
printf("compo c[%d]=%d\n",i,c[i]);

}
for(i=0;i<size3;i++){
printf("both d[%d]=%d\n",i,d[i]);

}
}