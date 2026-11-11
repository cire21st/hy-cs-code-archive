#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* ptr;
    int size;

    printf("Memory size >> ");
    scanf("%d", &size);

    if ((ptr = (char*)malloc(size)) == NULL) {
        printf("Memory allocation failed.\n");
        exit(0);
    }
    
    // 버퍼에 남은 줄바꿈 문자 제거 (rewind 대체)
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("string >> ");
    // gets(ptr); -> fgets로 대체
    if (fgets(ptr, size, stdin) != NULL) {
        ptr[strcspn(ptr, "\n")] = '\0'; // 개행 문자 제거
    }
    
    printf("%s\n", ptr);

    free(ptr);
    return 0;
}
