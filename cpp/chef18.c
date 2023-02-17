#include <stdio.h>
int main(void) {
	// your code goes here
	int n,a,b;
	scanf("%d",&n);
	while(n-->0){
	    scanf("%d %d",&a,&b);
	    printf("%d\n",(a*5+b*7));
	}
	return 0;
}
