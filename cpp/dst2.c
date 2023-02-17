//printf ddstring withourt no of strings mention

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[][30]={"raj","ran","monk"};
    int i;

    for(i=0;i<3;i++){
        printf("%s\n",ch[i]);
    }
}