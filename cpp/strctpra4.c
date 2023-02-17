//Scorecard: Create a program that stores scorecard data for a cricket match using a structure. The structure should include fields for the teams playing, the score, wickets fallen, number of overs, and individual player's score and wickets taken. The program should be able to display the scorecard data at any point during the match.

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

void displayScorecard(struct Scorecard s) {
    printf("%s vs %s\n", s.team1, s.team2);
    printf("%s: %d/%d in %d overs\n", s.team1, s.score1, s.wickets1, s.overs1);
    printf("%s: %d/%d in %d overs\n", s.team2, s.score2, s.wickets2, s.overs2);
}

int main() {
    struct Scorecard s;
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
    displayScorecard(s);
    return 0;
}
