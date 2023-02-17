#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,n;
	scanf("%d",&n);
	while(n-->0){
	    scanf("%d %d %d",&a,&b,&c);
	    /*if(a>b&&a>c){
	        printf("%d\n",a);
	    }
	    else if(b>a&&b>c){
	        printf("%d\n",b);
	    }
	    else{
	        printf("%d\n",c);
	    }
	}*/
    if(a>b){
        if(b>c){
            printf("%d\n",c);
        }
        else{
            printf("%d\n",a);
        }
    }
    else{
        printf("%d\n",b);
    }

    }
	return 0;
}

