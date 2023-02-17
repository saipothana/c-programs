//simple cricket game

#include<stdio.h>
#include<unistd.h>//is a library function to add delay
#include<time.h>
#include <stdlib.h>

void main() {
    int runs = 0;
    int overs = 0;
    int score = 0;
    int wickets = 0;
    int ball = 0;
    int toss;

    int randomtoss = rand() % 2 + 1;
    printf("Toss: %d\n", randomtoss);
    printf("Let's catch the live action between India and Pakistan in THEJeev channel\n");

    printf("Captains come forward! Heads or Tails....\n");
    printf("Choose 1 for head, 2 for tail\n");
    scanf("%d", &toss);

    if (toss == randomtoss) {
        printf("India wins the toss\n");
    } 
    else {
        printf("Pakistan wins the toss\n");
    }

    int choice;
    printf("Enter 1 to bat, 2 to bowl\n");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("India chooses to bat\n");
        while (wickets < 10 && overs < 20) {
            int outcome = rand() % 7;
            if (outcome == 0) {
                printf("It's a dot ball\n");
                ball++;
            } else {
                runs += outcome;
                printf("You scored %d runs!\n", outcome);
                ball++;
            }

            if (rand() % 10 == 0) {
                printf("Wicket!\n");
                wickets++;
            }

            if (ball == 6) {
                overs++;
                ball = 0;
                printf("Over: %d, Runs: %d, Wickets: %d\n", overs, runs, wickets);
            }
        }

        printf("Innings complete!\n");
        printf("Final Score: %d/%d\n", runs, wickets);

    } else if (choice == 2) {
        printf("India chooses to bowl\n");
        while (wickets <= 10 && overs <= 20) {
            int outcome = rand() % 7;
            if (outcome == 0) {
                printf("It's a dot ball\n");
                ball++;
            } else {
                score += outcome;
                printf("Opponent scored %d runs!\n", outcome);
                ball++;
            }

            if (rand() % 10 == 0) {
                wickets++;
                printf("Wicket!\n");
            }

            if (ball == 6) {
                overs++;
                ball = 0;
                printf("Over: %d, Runs: %d, Wickets: %d\n", overs, score, wickets);
            }
        }

        printf("Innings complete!\n");
        printf("Opponent's Score: %d/%d\n", score, wickets);
    }

    if (runs > score) {
        printf("India wins the World Cup\n");
    } else if (runs < score) {
        printf("Pakistan wins the World Cup\n");
    } else {

printf("The game is a tie!\n");
}
}




