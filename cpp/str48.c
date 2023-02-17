
//GAME OF STRINGS

//  GIVEN A STRING find the a)no of char b)no of vowels c)consonants d)alphabets e)digits f)space

#include<stdio.h>
#include<conio.h>
void main(){
    char name[50];
    int v=0,c=0,sp=0,a=0,d=0,ch=0,i;
printf("===================GAME OF STRINGS================================\n");
    printf("enter string\n");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        ch++;

        if(name[i]>=48&&name[i]<=57){
            d++;
        }
     if(name[i]==32){
            sp++;
        }
        if((name[i]>=65&&name[i]<=90)||(name[i]>=97&&name[i]<=122)){
            a++;
        
        if(name[i]=='A'||name[i]=='a'||name[i]=='E'||name[i]=='e'||name[i]=='i'||name[i]=='I'||name[i]=='O'||name[i]=='o'||name[i]=='u'||name[i]=='U'){
            v++;
        }
        else{
            c++;
        }
        }
    }
    printf("the name is %s\n",name);
printf("the chars are %d\n",ch);
printf("the digits are %d\n",d);
printf("the spaces are %d\n",sp);
printf("the alphabets are %d\n",a);
printf("the vowels are %d\n",v);
printf("the consonants are %d\n",c);
printf("no of words%d\n",sp+1);

 printf("==================GAME OF STRINGS=================================\n"); 


    }
