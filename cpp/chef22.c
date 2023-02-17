#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,n;
	scanf("%d",&n);
	while(n-->0){
	    scanf("%d %d",&a,&b);
	    if(a>b){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	}
    int x=2,y=4;
    x=y%x;
    printf("%d",x);
	return 0;
}

