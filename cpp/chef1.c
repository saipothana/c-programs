#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y;
	
	scanf("%d",&t);
	while(t-->0){
	 scanf("%d %d",&x,&y);
	
	if(x>y){
	    printf("FIRST\n");
	} 
	else if(x<y){
	    printf("Second\n");
	}
	else{
	    printf("ANY\n");
	}
	}
	return 0;
}