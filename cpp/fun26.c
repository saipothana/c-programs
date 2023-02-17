//compare two strings by ignore the case

//use functions

#include<stdio.h>
#include<conio.h>
void cig(char ch[30],char ch1[30]);
void cig(char ch[30],char ch1[30]){
    int i,j,k;
    for(i=0;ch[i]!='\0';i++){

    }
    for(j=0;ch[j]!='\0';j++){

    }
    if(i==j){
    for(i=0;ch[i]!='\0';i++){
if(!(ch[i]==ch[j]||ch[i]==ch1[i]-32||ch[i]==ch1[i]+32||ch1[i]==ch[i]+32||ch1[i]==ch[i]-32)){
    break;
}
    }
    if(ch[i]==ch[j]||ch[i]==ch1[i]-32||ch[i]==ch1[i]+32||ch1[i]==ch[i]+32||ch1[i]==ch[i]-32){
        printf("%s %s are equal\n",ch,ch1);
    }
    else{
        printf("not \n");
    }
    }
    else{
        printf("not eq\n");
    }


}
void main(){
 char ch[30];
printf("enter char\n");
gets(ch);
   char ch1[30];
printf("enter char\n");
gets(ch1);
cig(ch,ch1);
   

}