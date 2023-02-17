#include <stdio.h>

struct Scorecard {
    char team1[20];
    char team2[20];
    int score1;
    int wickets1;
    int overs1;
    int score2;
    int wickets2;
    int overs2;
};

void displayScorecard(struct Scorecard s, int player1_score, int player1_wickets, int player2_score, int player2_wickets) {
    printf("%s vs %s\n", s.team1, s.team2);
    printf("%s: %d/%d in %d overs\n", s.team1, s.score1, s.wickets1, s.overs1);
    printf("%s: %d/%d in %d overs\n", s.team2, s.score2, s.wickets2, s.overs2);
    printf("Player1 score: %d wickets: %d \n", player1_score, player1_wickets);
    printf("Player2 score: %d wickets: %d \n", player2_score, player2_wickets);
}
int main() {
    struct Scorecard s;
    int player1_score, player1_wickets, player2_score, player2_wickets;
    printf("Enter the name of team 1: ");
    scanf("%s", s.team1);
    printf("Enter the name of team 2: ");
    scanf("%s", s.team2);
    printf("Enter the score of team 1: ");
    scanf("%d", &s.score1);
    printf("Enter the wickets fallen of team 1: ");
    scanf("%d", &s.wickets1);
    printf("Enter the overs of team 1: ");
    scanf("%d", &s.overs1);
    printf("Enter the score of team 2: ");
    scanf("%d", &s.score2);
    printf("Enter the wickets fallen of team 2: ");
    scanf("%d", &s.wickets2);
    printf("Enter the overs of team 2: ");
    scanf("%d", &s.overs2);
    printf("Enter the score of player1: ");
    scanf("%d", &player1_score);
    printf("Enter the wickets of player1: ");
    scanf("%d", &player1_wickets);
    printf("Enter the score of player2: ");
    scanf("%d", &player2_score);
    printf("Enter the wickets of player2: ");
    scanf("%d", &player2_wickets);
    displayScorecard(s, player1_score, player1_wickets, player2_score, player2_wickets);
    return 0;
}
