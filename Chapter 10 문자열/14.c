#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAX 50

int main(void)
{
    char input[MAX];
    int i = 0;

    printf("텍스트를 입력하시오:");
    fgets(input, MAX, stdin);

    int length = strlen(input) - 1;

    if (input[length - 1] != '.')
    {
        input[length] = '.';
    }

    input[0] &= ~32;

    printf("결과 텍스트 출력:");

    fputs(input, stdout);

    return 0;
}
