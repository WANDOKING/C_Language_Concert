#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define MAX 50 // max length of string

int main(void)
{
    char input[MAX];

    printf("텍스트를 입력한다: ");
    fgets(input, sizeof(char) * MAX, stdin);

    printf("최종 텍스트: ");

    int bReading = TRUE;
    int i = 0;
    while (input[i] != '\0')
    {
        char temp = input[i] >= 'A' && input[i] <= 'Z' ? input[i] += 32 : input[i];

        if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
        {
            i++;
            continue;
        }

        putchar(input[i]);
        i++;
    }

    return 0;
}
