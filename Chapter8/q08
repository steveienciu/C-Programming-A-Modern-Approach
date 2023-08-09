/* modify chapter 8 q07 to compute average and total score of students quizs and max, min, and average for each quiz */

#include <stdio.h>

#define N 3

int main(void)
{
    int numbers[N][N];
    int sum = 0, min, max;

    printf("\n");
    for (int i = 0; i < N; ++i) {
        printf("Enter student %d's quiz scores: ", i + 1);
        for (int j = 0; j < N; ++j) {
            scanf("%d", &numbers[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            sum += numbers[i][j];
        }
        printf("Student %d - Total score: %d  Average score: %0.2f\n", i + 1, sum, (float) sum / N);
        sum = 0;
    }
    
    printf("\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            sum += numbers[j][i];
            if (j == 0) {
                min = numbers[j][i];
                max = numbers[j][i];
            }
            else if (numbers[j][i] < min) {
                min = numbers[j][i];
            }
            else if (numbers[j][i] > max) {
                max = numbers[j][i];
            }
        }
        printf("Quiz %d - Average score: %0.2f  High score: %d  Low score: %d\n", i + 1, (float) sum / N, max, min);
        sum = 0;
    }    

    return 0;
}
