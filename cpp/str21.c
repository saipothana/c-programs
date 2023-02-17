//uppercase to lowercase
#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
    int i;
    printf("enter char\n");
    scanf("%s",ch);
    printf("the case of %s ",ch);
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]<=90&&ch[i]>=65){
            ch[i]=ch[i]+32;
        }
        else{
            ch[i]=ch[i];
        }
    }
    ch[i]='\0';
    printf("is %s",ch);
}
