/* game of craps */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main(void) 
{
    int counter = 0, wins = 0, losses = 0;
    char decision[2] = {'.', '.'};

    if (play_game()) {
        ++wins;
    }
    else {
        ++losses;
    }

    while (decision[0] != 'n') {
        printf("\nPlay again? ");
        for (int i = 0; i < 2; ++i) {
            decision[i] = getchar();
        }
        
        if (decision[0] == 'y') {
            if (play_game()) {
                ++wins;
            }
            else {
                ++losses;
            }
        }
    }

    printf("Wins: %d   Losses: %d\n", wins, losses);

    return 0;
}

int roll_dice(void)
{
    int roll = rand() % 12 + 1;

    return roll;
}

bool play_game(void)
{
    int point = 0;

    srand((unsigned) time(NULL)); // can only call this function once or will create same number 

    printf("\n");
    for (int i = 0;;++i) {
        int roll = roll_dice();
        printf("You rolled: %d\n", roll);
        if (i == 0 && (roll == 7 || roll == 11)) {
            printf("You win!\n");
            return true;
        }
        else if (i == 0 && (roll == 2 || roll == 3 || roll == 12)) {
            printf("You lose!\n");
            return false;
        }

        if (i > 0 && roll == 7) {
            printf("You lose!\n");
            return false;
        }
        else if (i == 0) {
            point = roll;
            printf("Your point: %d\n", point);
        }
        else if (i > 0 && point == roll) {
            printf("You win!\n");
            return true;
        }
    }
}
