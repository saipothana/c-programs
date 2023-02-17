//https://prepinsta.com/tcs-ninja/hands-on-coding/

/**
 * 
 * 
 * break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var
 * 
 *Test cases
 * 
  Case 1

Input – defer
Expected Output – defer is a keyword

  Case 2

Input – While
Expected Output – while is not a keyword

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str1[16][30]={"break","case","continue","default","defer", "else","for", 
    "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};

    char str2[30];
int noc=1,i,j,flag=0;

    printf("enter str2\n");
    fflush(stdin);
    gets(str2);



/*
for(i=0;str1[i][j]!='\0';i++){
    if(str2[i]==str1[i][j]){
        flag=1;
        printf("%s\n",str2);
        printf("%s",str1[i]);
        break;
       
    }
}


    if(flag==0){
    printf("Expected o/p %s is a keyword",str2);
}
else{
    printf("Expected o/p %s is  not a keyword\n",str2); 
}


*/

//new method


for(i=0;str1[i][j]!='\0';i++){
    if(strcmp(str2,str1[i])==0){
        flag=1;
        break;
       
    }
}


    if(flag==1){
    printf("Expected o/p %s is a keyword",str2);
}
else{
    printf("Expected o/p %s is  not a keyword\n",str2); 
}



}





    
    
    
