//create a rock papper sissor game

#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>

int input(int playerchoice){
 printf("enter your choice\n *choose 0 for rock\n *choose 1 for paper\n *choose 2 for sissor");
  
  
    scanf("%d",&playerchoice);

   return playerchoice;
}



int print1(int computerchoice){
    computerchoice=rand()%3;
    return computerchoice;
}


void determinewinner(int playerchoice,int computerchoice){
     char *choice[]={"Rock","paper","sissor"};
     
     printf("the player choice is %s\n",choice[playerchoice]);
    printf("computer choice is %s\n",choice[computerchoice]);

    
    if(playerchoice==computerchoice){
        printf("OOps! it's a tie b/w player and computer\n");

    }
    else if((playerchoice==0&&computerchoice==2)||(playerchoice==2&&computerchoice==1)||(playerchoice==1&&computerchoice==0)){
        printf("PLayer wins!(YOU WIN)\n");
    }
    else if((playerchoice==2&&computerchoice==0)||(playerchoice==1&&computerchoice==2)||(playerchoice==0&&computerchoice==1)){
        printf("computer wins\n");
    }

    else{
        printf("Invalid choice! please enter the choices that mention in description\n");
    }




}



void main(){
    
int playerchoice;
   int computerchoice;
int play1=0;
int comp=0;
int mp=0;  //matches played
  char ch;

    playerchoice=input(playerchoice);
    computerchoice=print1(computerchoice);
 determinewinner(playerchoice,computerchoice);

printf("do you want to play again");

fflush(stdin);
scanf("%c",&ch);

while(ch=='y'||ch=='y'){
    mp++;
  playerchoice=input(playerchoice);
    computerchoice=print1(computerchoice);
 determinewinner(playerchoice,computerchoice);
 if(playerchoice==computerchoice){
        printf("OOps! it's a tie b/w player and computer");

    }
    else if((playerchoice==0&&computerchoice==2)||(playerchoice==2&&computerchoice==1)||(playerchoice==1&&computerchoice==0)){
        printf("PLayer wins!(YOU WIN)\n");
        play1++;
    }
    else if((playerchoice==2&&computerchoice==0)||(playerchoice==1&&computerchoice==2)||(playerchoice==0&&computerchoice==1)){
        printf("computer wins\n");
        comp++;
    }

    else{
        printf("Invalid choice! please enter the choices that mention in description\n");
    }

    printf("do you want to continue");
    fflush(stdin);
    scanf("%c",&ch);

 
}
printf("NO of matches played is %d\n",mp);
printf("matches win by player 1 is %d\n",play1);
printf("matches win by computer is %d\n",comp);

printf("Who Wins Most\n");
printf("%s",((play1>comp)?"player1 wins most":"computer wins most"));
}