//linear search        1 2 3 4  5       i want to find 4 is there or not     sr=4      a[i]==sr  --if found true else false
#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size,search,i;
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
        printf("element %d found in %d index",search,i+1);//so here we not use flag so beacause of this no found prints and after that found prints
        break;
    }
    else{
        printf("not found");
    }
}
}