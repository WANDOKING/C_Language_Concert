#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define MAX 50 // max length of string

int main(void)
{
    while (TRUE)
    {
        char input[MAX];

        printf("암호를 생성하시오: ");
        scanf("%s", input);

        int bIncludeNumber = FALSE;
        int bIncludeUpper = FALSE;
        int bIncludeLower = FALSE;

        int i = 0;
        while (input[i] != '\0')
        {
            // number
            if (input[i] >= '0' && input[i] <= '9')
            {
                bIncludeNumber = TRUE;
            }
            else if (input[i] >= 'A' && input[i] <= 'Z')
            {
                bIncludeUpper = TRUE;
            }
            else if (input[i] >= 'a' && input[i] <= 'z')
            {
                bIncludeLower = TRUE;
            }

            i++;
        }

        if (bIncludeNumber && bIncludeLower && bIncludeUpper)
        {
            printf("적정한 암호입니다.\n");
            break;
        }
        else
        {
            printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
        }
    }

    return 0;
}
