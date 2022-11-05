// 7. 사용자가 입력한 문자열을 거꾸로 하는 프로그램을 작성해보자.
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

    int length = strlen(input);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = input[i];
        input[i] = input[length - 1 - i];
        input[length - 1 - i] = temp;
    }

    printf("거꾸로 출력:");

    fputs(input + 1, stdout);
}
