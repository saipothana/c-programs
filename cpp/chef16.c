#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,j,count,s,a;
    printf("enter n\n");
	scanf("%d",&n);
	while(n-->0){
        printf("enter s\n");
	    scanf("%d",&s);
	    count=0;
	    for(i=0;i<s;i++){
            printf("enter s %d:\n",i);
	        scanf("%d",&a);
	        if(i==0||a<=0){
	          count=0;
              
	        }
	        else{
	            count++;
               
	        }
	    }
	    printf("%d",count);
	}
	return 0;
}

