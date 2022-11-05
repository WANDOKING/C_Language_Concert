// 8. 사용자가 입력한 문자열에서 대문자롤 소문자로 변경하는 프로그램을 작성해보자.
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

    printf("소문자 출력:");

    while (input[i] != '\0')
    {
        putchar(tolower(input[i]));
        i++;
    }
}
