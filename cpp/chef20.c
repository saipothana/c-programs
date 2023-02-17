#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int a,n,k,i,count;
	scanf("%d",&n);
	while(n-->0){
	   i=0;
       count=0;
	    scanf("%d",&a);
	//for(i=4;i<=a;i=i+4){
      //  count++;

    //}
    i=a/4;
    if(a%4!=0){
      
        i++;
    }
    else{
        i=i;
    }
    printf("%d\n",i);
	}
	return 0;
}

