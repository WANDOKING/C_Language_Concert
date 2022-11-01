#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

#define MAX 50 // max length of string

int main(void)
{
    const char* ANSWER = "1234";

    char input[MAX];

    printf("비밀번호를 입력하시오: ");

    int i = 0;
    while (i < MAX)
    {
        input[i] = _getch();

        if (input[i] == '\r')
        {
            input[i] = '\0';
            
            break;
        }

        _putch('*');
        i++;
    }

    putchar('\n');
    if (strcmp(input, ANSWER) == 0)
    {
        printf("비밀번호 일치\n");
    }
    else
    {
        printf("비밀번호 불일치\n");
    }

    return 0;
}
