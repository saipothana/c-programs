#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d %d %d",&a,&b,&c);
	   if((a<b&&a>c)||(a>b&&a<c)){
	       printf("%d\n",a);
	   }
	   else if((b>a&&b<c)||(b>c&&b<a)){
	       printf("%d\n",b);
	   }
	   else{
	       printf("%d\n",c);
	   }
	}
	return 0;
}

