#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],size,i,j,n,sum1,sum2;
	scanf("%d",&n);
	while(n-->0){
	    scanf("%d",&size);
	    sum1=0;
	    sum2=0;
	    for(i=0;i<size;i++){
	        scanf("%d",&a[i]);
	    }
	   // if(size%2==0){
	       // printf("YES\n");
	      // if(size>2){
	       for(i=0;i<=size/2;i=i+2){
	           sum1=sum1+a[i];
	       }
	       for(i=1;i<=size/2;i=i+1){
	          sum2=sum2+a[i]; 
	       }
	       printf("%d\n",sum1*sum2);
	       if((sum1*sum2)%2!=0){
	           printf("Yes\n");
	       }
	    
	    else{
	        printf("NO\n");
	    }
          // }
          /* else if(size<=2){
            if((a[0]*a[1])%2!=0){
               // printf("%d",a[0]*a[1]);
                printf("YES\n");
            }
            else{
                // printf("%d\n",a[0]*a[1]);
                printf("NO\n");
            }
           }*/
	}
	return 0;
}

