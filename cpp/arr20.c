//linear search

#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size,search,i,flag=0;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
  printf("enter element %d\n",i);
 scanf("%d",&a[i]);
}
for(i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
}
printf("enter element to search");
scanf("%d",&search);
for(i=0;i<size;i++){
    if(a[i]==search){
      //  printf("element %d found in %d index",search,i+1);//so here we not use flag so beacause of this no found prints and after that found prints
       //flag=1;
       break;
    }
    
}
if(i<size){//i less than size because if cond satisfies the i value become 5 therefore it is >size
   printf("element %d found in %d index",search,i+1); 
}
else{
    printf("%d not found",search);
}
}