// 10. 사용자로부터 받은 문자열이 회문인지를 점검하는 프로그램을 작성하라.
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
    for (int i = 0; i < length / 2; i++)
    {
        if (input[i] != input[length - 1 - i])
        {
            printf("이 문자열은 회문이 아닙니다.\n");
            return 0;
        }
    }

    printf("이 문자열은 회문입니다.\n");

    return 0;
}
