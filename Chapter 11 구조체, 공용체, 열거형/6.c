#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum
{
    CHOICE_SCISSOR = 0,
    CHOICE_ROCK = 1,
    CHOICE_PAPER = 2
} choice_t;

int main(void)
{
    const choice_t choiceComputer = CHOICE_SCISSOR;

    choice_t choice;

    printf("가위(0), 바위(1), 보(2)를 입력하세요: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case CHOICE_SCISSOR:
        printf("비겼습니다.\n");
        break;
    case CHOICE_ROCK:
        printf("이겼습니다.\n");
        break;
    case CHOICE_PAPER:
        printf("졌습니다.\n");
        break;
    }
}
