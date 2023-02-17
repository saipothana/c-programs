
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d %d",&x,&y);
	    if(x==00&&y==0){
	        printf("NO\n");
	    }
	    else if(x==y){
	        printf("YES\n");
	    }
	    else{
	       printf("NO\n");  
	    }
	}
	return 0;
}

