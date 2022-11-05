// 9. 문자열 안의 단어들의 개수를 세는 프로그램을 작성해보자.
#define _CRT_SECURE_NO_WARNINGS

#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include <ctype.h>

#define MAX 50

int main(void)
{
    char input[MAX];
    int i = 0;

    printf("텍스트를 입력하시오:");
    fgets(input, MAX, stdin);

    int bReading = FALSE;
    int count = 0;
    while (input[i] != '\n')
    {
        if (bReading == TRUE && input[i] == ' ')
        {
            count++;
            bReading = FALSE;
        }

        if (bReading == FALSE && input[i] != ' ')
        {
            bReading = TRUE;
        }

        i++;
    }

    if (bReading == TRUE)
    {
        count++;
    }

    printf("단어들의 개수 = %d\n", count);
}
