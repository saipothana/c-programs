//fun using strings

//reverse a sub string in c

#include<stdio.h>
#include<conio.h>
void revs(char ch[30],int si,int li);
void revs(char ch[30],int si,int li){
    int i,j,k=0;
  
for(i=0;ch[i]!='\0';i++);
for(j=li-1;j>=si;j--){
printf("%c\n",ch[j]);
}



}
void main(){
char ch[30];
printf("enter char\n");
gets(ch);
int si,li;
printf("enter si and li\n");
scanf("%d %d",&si,&li);
revs(ch,si,li);

}