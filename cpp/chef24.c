#include <stdio.h>

int main(void) {
	// your code goes here
	int n,m,k,x,j;
	scanf("%d",&j);
	while(j-->0){
	    scanf("%d %d %d %d",&n,&m,&k,&x);
	    if((x-1)%k==0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

