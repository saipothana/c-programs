#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,j,k,s;
	scanf("%d",&n);
	while(n-->0){
	    scanf("%d",&s);
	    k=0;
	    for(i=1;i<=s;i++){
	        if(s%i==0){
	            k++;
	        }
	    }
	    if(k==2){
	        printf("YES\n");
	    }
	  else if(k==1){
	        printf("NO\n");
	   }
        else{
           printf("NO\n");   
        }
	}
	return 0;
}




