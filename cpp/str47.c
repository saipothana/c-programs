//sorting of strings

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
    int i,j;

    printf("enter char\n");
    gets(ch);
    for(i=0;ch[i]!='\0';i++){
        for(j=i+1;ch[j]!='\0';j++){
            if(ch[i]>ch[j]){
                ch[i]=ch[i]+ch[j];
                ch[j]=ch[i]-ch[j];
                ch[i]=ch[i]-ch[j];
            }
        }
    }
//num to alphabet converter =====||
//int ch2=98;                    ||
//printf("%c",ch2);              ||
//=================================

    puts(ch);
}