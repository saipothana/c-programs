#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&a,&b);
	    if(a>b){
	        a=a-b;
	    }
	    else{
	        a=b-a;
	    }
	    printf("%d\n",a);
	}
	return 0;
}

