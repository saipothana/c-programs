//reverse a substring

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
    int i,j=0,si,ei;

    printf("enter str");
    gets(ch);

    printf("enter si\n");
scanf("%d",&si);

printf("enter ei\n");
scanf("%d",&ei);


for(i=0;ch[i]!='\0';i++){
    j++;
}

printf("the sub of %s is ",ch);
if(si>=0&&si<=ei&&ei<i&&ei>=si){
    for(i=si;i<ei;i++){
       
    }
    
    while(i-->si){    //while(--i>=si)
        printf("%c",ch[i]);
    }

}
else{
    printf("no sub");
}

}