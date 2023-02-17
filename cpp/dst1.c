//double dimension strings
//here 5 means no of strings ---i i=0--print raj i=1 print rani

//print with size 

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[5][30]={"raj","rani","ji","jp","jk"};
    int i;
    for(i=0;i<5;i++){
        printf("%s\n",ch[i]);
    }
}