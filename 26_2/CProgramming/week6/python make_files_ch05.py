import os

code_files = {
    "5-1.c": r"""#include <stdio.h>

int main()
{
    int numbers[5];
    numbers[0] = 11;
    numbers[1] = 22;
    numbers[2] = 33;
    numbers[3] = 44;
    numbers[4] = 55;

    printf("Element 0: %d\n", numbers[0]);
    printf("Element 1: %d\n", numbers[1]);
    printf("Element 2: %d\n", numbers[2]);
    printf("Element 3: %d\n", numbers[3]);
    printf("Last element: %d\n", numbers[4]);

    return 0;
}
""",
    "5-2.c": r"""#include <stdio.h>

int main()
{
    int scores[5];

    scores[0] = 95;
    scores[1] = 85;
    scores[2] = 100;
    scores[3] = 77;
    scores[4] = 65;

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, scores[i]);
    }

    return 0;
}
""",
    "5-3.c": r"""#include <stdio.h>

int main()
{
    char str[5];

    str[0] = 'H';
    str[1] = 'E';
    str[2] = 'L';
    str[3] = 'L';
    str[4] = 'O';

    for (int i = 4; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
""",
    "5-4.c": r"""#include <stdio.h>

int main()
{
    int number1[5] = { 3, 7, 12, 24, 45 };
    int number2[] = { 3, 7, 12, 24, 45 };
    int number3[5] = { 3, 7 };
    int number4[5] = { 0 };

    for (int i = 0; i < 5; i++) {
        printf("%d ", number1[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", number2[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", number3[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", number4[i]);
    }
    printf("\n");

    return 0;
}
""",
    "5-5.c": r"""#include <stdio.h>

int main()
{
    int arr[] = { 1, 2, 3, 6, 3, 8, 2, 2, 8, 1, 2, 3, 5, 
                  0, 9, 8, 7, 6, 5, 8, 4, 5, 6 };

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Number of array elements: %d\n", arr_size);
    return 0;
}
""",
    "5-6.c": r"""#include <stdio.h>

void print_square(int x);

int main()
{
    int i;
    int base[5] = { 31, 71, 21, 41, 51 };

    for (i = 0; i < 5; i++)
        print_square(base[i]);

    return 0;
}

void print_square(int x)
{
    printf("%d ", x * x);
}
""",
    "5-7.c": r"""#include <stdio.h>

double average(int x[]);

int main()
{
    double avg;
    int base[5] = { 3, 7, 2, 4, 5 };

    avg = average(base);
    printf("base average = %.3f\n", avg);

    return 0;
}

double average(int x[])
{
    int i, sum = 0;
    for (i = 0; i < 5; i++)
        sum += x[i];
    return (sum / 5.0);
}
""",
    "5-8.c": r"""#include <stdio.h>

int array_list(int*, int);

int main()
{
    int scores[10] = { 95, 83, 75, 98, 65, 77, 90, 91 };
    int array_size, total;

    array_size = sizeof(scores) / sizeof(int);
    total = array_list(scores, array_size);

    printf("Number of elements in scores array: %d\n", array_size);
    printf("Total sum of scores: %d\n", total);

    return 0;
}

int array_list(int scores[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum += scores[i];
    return sum;
}
""",
    "5-9.c": r"""#include <stdio.h>

int findMax(int numbers[], int size) {
    int max = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int main()
{
    int numbers[10] = { 10, 52, 23, 74, 15, 67, 38, 29, 40, 51 };
    int max_value = findMax(numbers, 10);

    printf("The maximum value in the array is %d.\n", max_value);

    return 0;
}
""",
    "5-10.c": r"""#pragma warning(disable: 4996)
#include <stdio.h>

void numPrinted(int numbers[], int readNum);

void numPrinted(int numbers[], int readNum) {
    for (int i = readNum - 1; i >= 0; i--) {
        printf("%3d", numbers[i]);
    }
}

int main()
{
    int readNum;
    int numbers[20];

    printf("Enter the number of integers: ");
    scanf("%d", &readNum);

    if (readNum > 20) readNum = 20;

    printf("\nInitialize the entered integers:\n");
    for (int i = 0; i < readNum; i++)
        scanf("%d", &numbers[i]);

    printf("\nPrinting the entered integers in reverse order: \n");
    numPrinted(numbers, readNum);

    return 0;
}
""",
    "5-11.c": r"""#include <stdio.h>

void bubbleSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = { 7, 4, 5, 1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Initial array: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    bubbleSortAscending(arr, n);

    printf("Sorted array: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    return 0;
}
""",
    "5-12.c": r"""#include <stdio.h>

int main()
{
    int table[4][4];
    int num = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            table[i][j] = num;
            num++;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
""",
    "5-13.c": r"""#include <stdio.h>

int main()
{
    int a[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d][%d]=%d ", i, j, a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
""",
    "5-14.c": r"""#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int i, j, array[3][4];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter an integer >> ");
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            printf("%d\t", array[i][j]);
        printf("\n");
    }
    printf("\n");

    return 0;
}
""",
    "5-15.c": r"""#pragma warning (disable: 4996)
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
""",
    "5-16.c": r"""#include <stdio.h>

int main()
{
    int myArray[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("myArray[%d][%d][%d] = %d\n", i, j, k, myArray[i][j][k]);
            }
        }
    }
    return 0;
}
""",
    "5-17.c": r"""#include <stdio.h>
#include <stdlib.h>

#define FLOOR 3
#define ROW 4
#define COL 5

int main()
{
    int array[FLOOR][ROW][COL];
    int a, b, c;

    for (a = 0; a < FLOOR; a++) {
        for (b = 0; b < ROW; b++) {
            for (c = 0; c < COL; c++) {
                array[a][b][c] = rand() % 100; // Generate a readable random number
            }
        }
    }

    for (a = 0; a < FLOOR; a++) {
        for (b = 0; b < ROW; b++) {
            for (c = 0; c < COL; c++) {
                printf("array[%d][%d][%d] = %d\t", a, b, c, array[a][b][c]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
"""
}

# 폴더 생성 및 파일 쓰기
folder_name = "Ch05_Examples"
os.makedirs(folder_name, exist_ok=True)

for filename, content in code_files.items():
    file_path = os.path.join(folder_name, filename)
    with open(file_path, "w", encoding="utf-8") as f:
        f.write(content)

print(f"총 {len(code_files)}개의 파일이 '{folder_name}' 폴더에 성공적으로 생성되었습니다!")