#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,n;
	scanf("%d",&n);
	while(n-->0){
	    scanf("%d %d %d",&a,&b,&c);
	    if(c==0){
	        printf("YES\n");
	    }
       /* else if(a*b==c||a+b==c||a-b==c||a/b==c){
            printf("YES\n");
        }
	  else  if(a*b-a==c||a*b-b==c){
	       printf("YES\n");
	   }
	   else{
	       printf("NO\n");
	   }
	}*/
   
    else if(c%a==0||c%b==0){
        printf("YES\n");
    }
     else{
	       printf("NO\n");
	   }
	return 0;
}
}

