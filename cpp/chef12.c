#include <stdio.h>

int main(void) {
	// your code goes here
	
	//input to the arry
	
	int n,i,j,a[100],b[100],k,s,d,size,count;
    printf("enter n\n");
	scanf("%d",&n);

	while(n-->0){
	    count=0;
        printf("enter size\n");
	 scanf("%d",&size);
	 for(i=0;i<size;i++){
        printf("element %d\n",i);
	     scanf("%d",&a[i]);
	 }
	 printf("\n");
	  for(i=0;i<size;i++){
        printf("element %d\n",i);
	     scanf("%d",&b[i]);
	 }
	 
	 for(i=0;i<size;i++){
	     if(a[i]==b[i]){
	       count++;  
	     }
	 }
	 printf("%d\n",count);
	}
	return 0;
}

