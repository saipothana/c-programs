#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	
	n=n-a;
	printf("%d ",n);
	
	//n=(n+1)-(a+b);
   // n=n-b;
    n-=b;
	printf("%d\n",n);
	return 0;
}
