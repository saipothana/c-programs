//compare n str ----------jeev   jeem      noc=2   jee==jee---equal

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30],ch1[30];
    int i,noc,j=0;
    printf("enter str1\n");
    gets(ch);

    printf("enter str2\n");
    gets(ch1);

    printf("enter noc\n");
    scanf("%d",&noc);

    for(i=0;ch[i]!='\0';i++);
    for(i=0;ch1[i]!='\0';i++);

    if(noc<i&&noc>=0){
        for(i=0;i<noc;i++){
            if(ch[i]!=ch1[i]){
                 break;
            }
        }

        if(ch[noc-1]==ch1[noc-1]){
            printf("%s and %s both are eq",ch,ch1);
        }
        else{
            printf("not");
        }
    }
    else{
        printf("no compare");
    }
    

}

