//delete duolicates

#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30];
int i,j,f=0,k;
    printf("enter str\n");
    gets(ch);
for(i=0;ch[i]!='\0';i++){
f++;
}
    for(i=0;ch[i]!='\0';i++){
for(j=i+1;ch[j]!='\0';j++){
    if(ch[i]==ch[j]){
        for(k=i;ch[k]!='\0';k++){
            ch[k]=ch[k+1];
        }

    j--;
        f--;
    }
}
    }

//ch[f--]='\0';
puts(ch);
    }