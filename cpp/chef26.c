#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,n;
	scanf("%d",&n);
	while(n-->0){
	    scanf("%d %d",&a,&b);
	    if(b>a){
	        printf("%d\n",b-a);
	    }
	  else if(b==0){
	        printf("%d\n",a*2);
	    }
	   else if(b<a){
	        printf("%d\n",a-b+a);
	    }
	}
	return 0;
}

