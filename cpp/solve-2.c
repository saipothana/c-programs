//Remove first and last occeruence char c from string  ex:   helloworld   ch=l    0/p=heloword(remove first l and last l)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void input(char str[100]);
void print(char str[100]);
void del(char str[100],char ch);
void rev(char str[100]);
void input(char str[100]){
    printf("enter string\n");
    fflush(stdin);
    scanf("%s",str);

   
}
void print(char str[100]){
    printf("the string is\n");
printf("%s",str);
}

void del(char str[100],char ch){
    int i,j,k;
    
    for(i=0;str[i]!='\0';i++);
    for(j=0;j<i;j++){
        if(str[j]==ch){
            for(k=j;k<i;k++){
                str[k]=str[k+1];
            }
            break;
        }
    }
   
       

}
void rev(char str[100]){
   strrev(str);
}
void main(){
    char str[100],ch;
  
    printf("enter char\n");
    fflush(stdin);
    scanf("%c",&ch);
    int i,j;
  //  str=(char *)malloc(sizeof(char)*10);
    //  str2=(char *)malloc(sizeof(char)*10);
   
 input(str);
    del(str,ch);
    printf("\n");
   print(str);
    rev(str);
    printf("\n");
    del(str,ch);
    rev(str);
    print(str);


}
