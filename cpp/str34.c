//compare two strings
#include<stdio.h>
#include<conio.h>
void main(){
    char ch1[30],ch2[30];
    int i,j;
    printf("enter ch1\n");
    scanf("%s",ch1);
printf("enter ch2\n");
    scanf("%s",ch2);


    for(i=0;ch1[i]!='\0';i++);
    for(j=0;ch2[j]!='\0';j++);
    if(i==j){
        printf("the %s and %s are ",ch1,ch2);
        for(i=0;ch1[i]!='\0';i++){
            if(ch1[i]==ch2[i]){
printf("equal\n");
break;
            }
            else{
                printf("not equal\n");
                break;
            }
        }

    }
    else{
         printf("the %s and %s are not same",ch1,ch2);
    }
}