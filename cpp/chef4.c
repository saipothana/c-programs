#include <stdio.h>

int main(void) {
	// your code goes here
	int t,rem,i,x,y,z;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d%d",&x,&y,&z);
	    x=x*5+y*10;
	    rem=x/z;
	    printf("%d\n",rem);
	    x=0,y=0;
	}
	return 0;
}