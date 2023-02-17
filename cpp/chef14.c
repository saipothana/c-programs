#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int n,s,i,j,count1,count2;
	char ch[30];
char ch1[30]="START38";
char ch2[30]="LTIME108";
    printf("enter n\n");
	scanf("%d",&n);
	while(n-->0){
	 printf("enter s\n");
	 scanf("%d",&s);
	 count1=0;
     count2=0;
	 for(i=0;i<s;i++){
        
        printf("char %d\n",i);
	     fflush(stdin);
	     scanf("%s",ch);
         printf("%s\n",ch);
         for(j=0;ch[j]!='\0';j++){
	    if(ch[j]==ch1[j]){
	        
            // printf("cou1 %d\n",count1);
            count1++;
	     }
         
	    else if(ch[j]==ch2[j]){
	        
             count2++;
            // printf("cou2 %d\n",count1);
	     }
         
         }
	 }
     
	 printf("%d %d\n",count1,count2);
     

     }

return 0;
	}
	

