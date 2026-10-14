#pragma warning (disable: 4996)
#include <stdio.h>

void gradePrint(int grade[3][3]) {
    int i, j, tot = 0;
    double avg = 0;

    printf("\n");
    printf(" === Grade Report ===\n");
    printf("==========================================\n");
    printf(" No.\tKorean\tEnglish\tMath\tTotal\tAverage\tGrade\n");

    for (i = 0; i < 3; i++) {
        printf("%d\t", i + 1);
        for (j = 0; j < 3; j++) {
            tot += grade[i][j];
            printf("%d\t", grade[i][j]);
        }
        avg = tot / 3.0;
        printf("%d\t%.2lf\t", tot, avg);

        if (avg >= 90) printf("A\n");
        else if (avg >= 80) printf("B\n");
        else if (avg >= 70) printf("C\n");
        else if (avg >= 60) printf("D\n");
        else printf("F\n");

        tot = 0;
    }
    printf("==========================================\n");
}

int main()
{
    int i, j;
    int grade[3][3];

    for (i = 0; i < 3; i++) {
        printf("Enter scores for student %d (Korean, English, Math): ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &grade[i][j]);
        }
    }
    gradePrint(grade);

    return 0;
}
