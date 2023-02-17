//create a rock papper sissor game

#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>

void main(){
    char *choice[]={"Rock","Paper","Sissor"};
    srand(time(NULL)); 

    int playerchoice,computerchoice;

   printf("enter your choice\n *choose 0 for rock\n *choose 1 for paper\n *choose 2 for sissor");
  
  
    scanf("%d",&playerchoice);

    computerchoice=rand()%3;
printf("==========================\n");
    printf("your choice is %s\n",*(choice+playerchoice));
    printf("computer choice is %s\n",choice[computerchoice]);

    if(playerchoice==computerchoice){
        printf("OOps! it's a tie b/w player and computer");
    }
    else if((playerchoice==0&&computerchoice==2)||(playerchoice==2&&computerchoice==1)||(playerchoice==1&&computerchoice==0)){
        printf("PLayer wins!(YOU WIN)\n");
    }
    else{
        printf("computer wins\n");
    }

    
}