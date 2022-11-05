// 11. 사용자로부터 문자를 입력받아서 그 문자의 아스키 코드 값을 출력하는 프로그램을 작성하라.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    printf("문자 입력:");
    char input = getchar();

    printf("입력받은 문자의 아스키 코드 값 = %d\n", input);

    return 0;
}
