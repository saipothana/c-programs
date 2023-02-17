#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<string.h>

struct cricketgame
{
   char team1[30];
   char team2[30];
   char player1[30];
   char player2[30];
   int overs;
   int wickets;
   int runs;
   int balls;
   int fours;
   int sixes;
   int fifty;
   int century;

};

void display(struct cricketgame dis){

printf("***Let's catch the Live action in THEJeev Sports Channel***\n\n");
printf("***the worldcup Match is B/w: %s vs %s***\n\n",dis.team1,dis.team2);
printf("\t\tthe Live action begins after countdown....\n\n");
int i;
for(i=1;i<=10;i++){
    printf("%d\n",i);
    sleep(1);
}
printf("Let's Go for the toss\n");
}
int  toss(struct cricketgame to){
    printf("enter 1 for head\n enter 2 for tail\n");
    int choice;
    scanf("%d",&choice);
    int randtoss=rand()%2+1;
    if(randtoss==choice){
        printf("%s won the toss\n",to.team1);
      

        return 1;
    }
    else{
        printf("%s won the toss\n",to.team2);

        return 2;
       
    }

}

  void initialize(struct cricketgame *ini,char player1[]){
    strcpy(ini->player1,player1);
    ini->balls=0;
    ini->century=0;
    ini->fifty=0;
    ini->fours=0;
    ini->overs=0;
    ini->runs=0;
    ini->sixes=0;
    ini->wickets=0;
    
  }

  void initialize1(struct cricketgame *init,char player2[]){
      strcpy(init->player2,player2);
    init->balls=0;
    init->century=0;
    init->fifty=0;
    init->fours=0;
    init->overs=0;
    init->runs=0;
    init->sixes=0;
    init->wickets=0;
  }

  int  play(struct cricketgame pl[11]){
    int i=0,j=0;
    printf("%s from %s is bowling\n",pl[j].player2,pl[0].team2);
    int random=rand()%7;
    if(random==0){
        printf("%s got a wicket of %s\n",pl[j].player2,pl[i].player1);
        pl[j].wickets++;
        pl[j].balls++;
return 0;
    }
    else{
        printf("%s scored %d runs\n",pl[i].player1,random);
        pl[i].runs+=random;
        pl[j].balls++;

        if(pl[j].balls==6&&j<=10){
            j++;
            pl[j].balls=0;
        }

        return random;

    }

  }

  void main(){
struct cricketgame s;
    struct cricketgame teama[11];
    struct cricketgame teamb[11];
  //  char teama[30];
  //  char teamb[30];

printf("enter team1\n");
scanf("%s",s.team1);
printf("enter teamb\n");
scanf("%s",s.team2);
    display(s);
char play1[30];
char play2[30];
int i;
toss(s);
printf("================%s=============\n",s.team1);
for(i=0;i<11;i++){
   printf("enter player %d: ",i+1); 
   scanf("%s",play1);
   initialize1(&teama[i],play1);
}
printf("================================\n");

printf("================%s=============\n",s.team2);
for(i=0;i<11;i++){

printf("enter player %d: ",i+1); 
   scanf("%s",play2);
   initialize1(&teamb[i],play2);
}
printf("================================\n");


int total1=0;
int total2=0;
int totwickets1=0;
int totwickets2=0;
while(totalwickets1<=10||totalwickets2<=10){
    
}
  }
