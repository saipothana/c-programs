#include<stdio.h>
#include<string.h>
struct stats{
char team1[30];
char team2[30];
int score1;
int score2;
char playername[30];
int playerscore;


int sixes;
int fours;
};
void display(struct stats s){
    printf("==============================================\n");
    printf("The Match is Held b/w %s vs %s\n",s.team1,s.team2);
    printf("the %s score is %d",s.team1,s.score1);
      printf("the %s score is %d\n",s.team2,s.score2);


}

void playersstats(struct stats sol[]){
    int i,max=0;char bestplayer[30];
    int highscore;
    printf("playername   score   50's   100's   sixes   fours\n");
     printf("------------------------------------\n");
    for(i=1;i<=11;i++){
       
        printf("%d.) %s ",i,sol[i].playername);
       
        printf("- %d  ",sol[i].playerscore);
        if(sol[i].playerscore>=100){
            printf("- 1 ");
        }
        else{
            printf("- 0 ");
        }
      if(sol[i].playerscore>=50&&sol[i].playerscore<100){
            printf("- 1 ");
        }
        else{
            printf("- 0 ");
        }
        
    printf("- %d ",sol[i].sixes);
    printf(" - %d\n",sol[i].fours);
        
if(max<sol[i].playerscore){
    strcpy(bestplayer,sol[i].playername);
    highscore=sol[i].playerscore;
     max = sol[i].playerscore;//update the score
}

}
    
 printf("------------------------------------\n");
 printf("\n\n");
 printf("*****************************************\n");
    printf("the mom is %s with score of %d.\n",bestplayer,highscore);
    printf("**************************************\n");

}
void main(){
struct stats s[11];
    int i;
    for(i=1;i<=11;i++){
        printf("enter player name %d\n",i);
        scanf("%s",s[i].playername);

        printf("enter score %d\n",i);
        scanf("%d",&s[i].playerscore);

        printf("enter sixes %d\n",i);
        scanf("%d",&s[i].sixes);

         printf("enter fours %d\n",i);
        scanf("%d",&s[i].fours);


    }

printf("enter teama\n");
scanf("%s",s[0].team1);
printf("enter teamb\n");
scanf("%s",s[0].team2);
    printf("enter team1 score\n");
    scanf("%d",&s[0].score1);
      printf("enter team2 score\n");
    scanf("%d",&s[0].score2);

    display(s[0]);

playersstats(s);

}