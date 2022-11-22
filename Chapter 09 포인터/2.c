#include <iostream>

int main(void)
{
    int nums[5];

    printf("5개의 정수를 입력하시오: ");
    for (int i = 0; i < 5; i++)
    {
        scanf_s("%d", nums + i);
    }

    printf("역순: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", *(nums + i));
    }
}
