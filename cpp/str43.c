//insert element into str  .............same like insert elemnt into array    

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30],ch1;
    int in,i,j=0;

    printf("enter str\n");
    gets(ch);

    printf("enter ch1\n");
    scanf("%c",&ch1);

    printf("enter in \n");
    scanf("%d",&in);

    for(i=0;ch[i]!='\0';i++){
j++;
    }

    for(i=j;i>=in;i--){
        ch[i+1]=ch[i];
    }
    ch[in]=ch1;


    //for(i=0;i<=j;i++){
      //  putchar(ch[i]);
    //}

    //or
    
    puts(ch);
}