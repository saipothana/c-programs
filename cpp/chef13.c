#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b,c;
	scanf("%d",&n);
	while(n-->0){
	    scanf("%d %d %d",&a,&b,&c);
	    if((c*2+a)>=b){
	        printf("yes\n");
	    }
	    else if((c*1+a)>=b){
	        printf("YES\n");
	    }
	    else{
	        printf("no\n");
	    }
	}
	return 0;
}

