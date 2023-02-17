#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,x;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&x);
	    if(x>20){
	        printf("HOT\n");
	    }
	    else if(x<20){
	        printf("COLD\n");
	    }
	}
	return 0;
}
