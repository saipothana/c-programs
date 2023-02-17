#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,i;
    
	for(i=1;i<=2;i++){
        if(2%i==0){
            a++;
        }
    }
    if(a==2){
        printf("prime");
    }
    else{
        printf("not");
    }
}

