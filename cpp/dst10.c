//copy two str using k
#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30][30];
    int noc,i,j,k;
    printf("enter nos\n");
    scanf("%d",&noc);

    for(i=0;i<noc;i++){
printf("enter str %d\n",i);
fflush(stdin);
scanf("%s",&ch[i]);
    }

    for(i=0;i<noc;i++){
        printf("before copy %s\n",ch[i]);
k=0;
        for(j=0;ch[i][j]!='\0';j++){
ch1[i][k++]=ch[i][j];
        }

        printf(" the copy of ch %s to ch1 %s .\n",ch[i],ch1[i]);
    
    //ch1[i][j]='\0';
    }

     //ch1[i][j]='\0';//ctrlb is used to put full screen in vs .

}


#include<stdio.h>
#include<conio.h>
void main(){
    char ch[30][30],ch1[30][30],ch2[30][30];
    int noc,i,j,k=0;
    printf("enter nos\n");
    scanf("%d",&noc);

    for(i=0;i<noc;i++){
printf("enter str %d\n",i);
fflush(stdin);
scanf("%s",&ch[i]);
    }


    for(i=0;i<noc;i++){
printf("enter str2 %d\n",i);
fflush(stdin);
scanf("%s",&ch1[i]);
    }

    for(i=0;i<noc;i++){
        for(j=0;ch[i][j]!='\0';j++){
            ch2[i][k++]=ch[i][j];
        }
     
    }

    

    for(i=0;i<noc;i++){
        for(j=0;ch1[i][j]!='\0';j++){
            ch2[i][k++]=ch1[i][j];
        }

    }



        for(i=0;i<noc;i++){
        for(k=0;ch2[i][k]!='\0';k++){
           
        }
         
        printf("the combo is %s\n",ch2[i]);
    }
   
    

}