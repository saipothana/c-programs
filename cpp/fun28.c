//sorting  strings using functions

#include<stdio.h>
#include<conio.h>

void sort(char ch[30]);
void sort(char ch[30]){
    int i,j;
    for(i=0;ch[i]!='\0';i++){
        for(j=i+1;ch[j]!='\0';j++){
            if(ch[i]>ch[j]){
                ch[i]=ch[i]+ch[j];
                ch[j]=ch[i]-ch[j];
                ch[i]=ch[i]-ch[j];
            }
        }
    }
    puts(ch);
}
void main(){
 char ch[30];
printf("enter char\n");
gets(ch);
sort(ch);
}