//string handling functions:
//===================================================


//strcat() - used to combine to strings

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char ch[30]="jeevan";
    char ch1[30]="kumar";
   // printf("%s",strcat(ch,ch1));

  // printf("%s",strcat(ch," sai"));


   //=====================nested string cat========================================
   strcat(strcat(ch,ch1),"pothana"); //here in nested strings we are concating three strs and storing in str1 i.e.. ch;

   printf("%s",ch);
}