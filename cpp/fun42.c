//palindrome use funs

#include<stdio.h>
#include<conio.h>
char pali(char ch[30][30],int noc);

char pali(char ch[30][30],int noc){

    int i,j,k,t;
    char ch1[30][30];
    for(i=0;i<noc;i++){
        t=0;
        for(j=0;ch[i][j]!='\0';j++);

        while(--j>-1){
          ch1[i][t++]=ch[i][j]; 
        }

ch1[i][t]='\0';

       for(k=0;ch[i][k]!='\0';k++){
            if(ch1[i][k]!=ch[i][k]){
                break;
            }
        }
        if(ch[i][k]==ch1[i][k]){
        printf("%s  is pali\n",ch[i]);
       }
       else{
        printf("not");
       }
    
    
}

}

void main(){


  char ch[30][30];
    int noc,i,j;
    printf("enter noc\n");
    scanf("%d",&noc);
for(i=0;i<noc;i++){
    printf("enter string %d\n",i);
    fflush(stdin);
    scanf("%s",&ch[i]);


} 

for(i=0;i<noc;i++){
  //  printf("the rev of %s is \n",ch[i]);

}
pali(ch,noc); 
}