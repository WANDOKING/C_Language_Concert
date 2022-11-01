#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define MAX 50 // max length of string
#define COUNT_ALPHABET 26

int main(void)
{
    char input[MAX];

    printf("입력 문자열: ");
    scanf("%s", input);

    int countChar[COUNT_ALPHABET] = { 0, };

    for (int i = 0; input[i] != '\0'; i++)
    {
        countChar[input[i] - 'a']++;
    }

    for (int i = 0; i < COUNT_ALPHABET; i++)
    {
        if (countChar[i] == 0)
        {
            continue;
        }

        printf("%c문자가 %d번 등장하였음!\n", 'a' + i, countChar[i]);
    }

    return 0;
}
