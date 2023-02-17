//
#include<stdio.h>
#include<conio.h>
void main(){
    char str[100],ch;
    int i,j,k;
    printf("enter str\n");
    fflush(stdin);
    scanf("%s",str);

    printf("enter char\n");
    fflush(stdin);
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++);
    for(j=0;j<i;j++){
        if(str[j]==ch){
            for(k=j;k<i;k++){
                str[k]=str[k+1];
            }
           
          // i--;
           break;
        }
    }
        
    printf("%s",str);
}