#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

#define MAX 50

int main(void)
{
    char input[MAX];
    int i = 0;

    printf("텍스트를 입력하시오:");
    fgets(input, MAX, stdin);

    printf("대문자 출력:");

    while (input[i] != '\0')
    {
        putchar(toupper(input[i]));
        i++;
    }
}
