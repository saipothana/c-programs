//Cricket game using structures


#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<time.h>

struct cricket{
    char name[30];
    int wickets;
    int overs;
    int runs;
    int balls;
};

void initialize(struct cricket *game,char name[]){
   strcpy(game->name,name);
   game->wickets=0;
   game->overs=0;
   game->runs=0;
   game->balls=0;
}

int play(struct cricket *p){
    int final=0;
    int randscore=rand()%7; //o to 6
if(randscore==0){
    printf("%s IS OUT!\n",p->name);
    p->wickets++;
    return 0;

}
else{
   
    printf("%s scores %d runs\n",p->name,randscore);
     p->runs+=randscore;
    p->balls++;
return randscore;
}




}

int main(){
    struct cricket p1[11];
    struct cricket p2[11];

    int i;
    char name1[30];
    for(i=0;i<11;i++){
        printf("Enter player %d name for team1: ",i+1);
        scanf("%s",name1);
        initialize(&p1[i],name1);
        printf("\n");
    }
    for(i=0;i<11;i++){
        printf("Enter player %d name for team2: ",i+1);
        scanf("%s",name1);
         initialize(&p2[i],name1);
        printf("\n");
    }
    int totalwickets1=0;
    int totalwickets2=0;
    int score1=0;
    int score2=0;
    //int overs=0;
    int j=0;
    int k=0;

while(totalwickets1<10||totalwickets2<10){
    printf("team 1: %s is batting\n",p1[j].name);
  //  printf("%s scores %d runs",p1[j].name,play(&p1[j]));

    score1+=play(&p1[j]);
totalwickets1+=p1[j].wickets;

if(totalwickets1>=10){
    printf("team1 allout!\n");
    break;
}

  printf("team 2: %s is batting\n",p2[k].name);
    //printf("%s scores %d runs",p2[j].name,play(&p2[j]));

    score2+=play(&p2[k]);
totalwickets2+=p2[k].wickets;

if(totalwickets2>=10){
    printf("team2 allout!\n");
    break;
}



j = (j + 1) % 11;
k = (k + 1) % 11;

//j++;
//k++;
sleep(1);



}

printf("Team 1: %d runs, %d wickets\n", score1, totalwickets1);
printf("Team 2: %d runs, %d wickets\n", score2, totalwickets2);
if(score2>score1){
    printf("team2 wins\n");
}
else if(score2<score1){
    printf("team1 wins\n");
}
else{
    printf("it's a tie break b/w both of them\n");
}
    
}