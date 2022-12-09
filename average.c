#include <stdio.h>
#include <stdlib.h>

void averagescore()
{
    int score1, score2, score3;
    float average;

    printf("input T1 score here: ");
    scanf("%d", &score1);
    printf("input T2 score here: ");
    scanf("%d", &score2);
    printf("input T3 score here: ");
    scanf("%d", &score3);

    average = (score1+score2+score3)/3.0;

    printf("your average score is %.2f", average);
}

int main()
{
    averagescore();

    return (0);
}