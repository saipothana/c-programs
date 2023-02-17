#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d %d",&x,&y);
	    x=x-y;
	    printf("%d\n",x);
	}
	return 0;
}

