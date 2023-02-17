#include <stdio.h>

int main(void) {
	// your code goes heresqrt(a)*b+sqrt(a)-1*code
	int n,a,b,c,i,s,count;
	scanf("%d",&n);
	while(n-->0){
	    scanf("%d %d %d",&a,&b,&c);
	    s=1;
	    count=0;
	    for(i=0;i<a;i++){
	   s=s*2;
	   count++;
	   if(s==a){
	       break;
	   }
        }
	  printf("%d=====\n",count);
	    printf("%d\n",(count*b+(count-1)*c));
	
    }
	return 0;
}

