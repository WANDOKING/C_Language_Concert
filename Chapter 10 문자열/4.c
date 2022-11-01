#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define MAX 50 // max length of string

int main(void)
{
    char input[MAX];

    printf("텍스트를 입력하시오: ");
    fgets(input, sizeof(char) * MAX, stdin);

    printf("공백이 제거된 텍스트: ");

    int bReading = TRUE;
    int i = 0;
    while (input[i] != '\0')
    {
        if (input[i] == ' ')
        {
            if (bReading == FALSE)
            {
                i++;
                continue;
            }
            else
            {
                bReading = FALSE;
            }
        }
        else
        {
            bReading = TRUE;
        }

        putchar(input[i]);
        i++;
    }

    return 0;
}
