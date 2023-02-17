//reverse case ----if capital print small if small print capital]

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
    int i,j;
    printf("enter char\n");
    scanf("%s",ch);
    printf("the reverse of %s is ",ch);
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]<=90&&ch[i]>=65){
            ch[i]=ch[i]+32;
        }
        else if(ch[i]<=122&&ch[i]>=97){
            ch[i]=ch[i]-32;
        }
        else{
            ch[i]=ch[i];
        }
    }
    ch[i]='\0';
    printf("%s",ch);
}