//exersise on strcmp  strcpy 

//we have s1,s2,s3 strings if s1==s2 then print therir lengths ..if != then join them together and copy it in s3 and find lengths

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char s1[30];
    char s2[30];
char s3[30];
printf("enter str1:\n");
gets(s1);


printf("enter str2:\n");
gets(s2);

//printf("enter str3:\n");
//gets(s3);

if(strcmp(s1,s2)==0){
    printf("strings are  equal\n");
printf("the len of %s is %d\n",s1,strlen(s1));
printf("the len of %s is %d\n",s2,strlen(s2));
strcpy(s3,s1);
printf("the len of %s is %d\n",s3,strlen(s3));
    
}
else{
    printf("strings are not equal\n");
strcat(s1,s2);
strcpy(s3,s1);
printf("the len of %s is %d\n",s1,strlen(s1));
printf("the len of %s is %d\n",s2,strlen(s2));
printf("the len of %s is %d\n",s1,strlen(s3));
}
}