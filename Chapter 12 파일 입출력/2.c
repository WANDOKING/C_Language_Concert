#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void)
{
    const char* FILE_NAME = "2.txt";
    FILE* file;

    if (fopen_s(&file, FILE_NAME, "r") != 0)
    {
        printf("fopen_s() error!");
        exit(1);
    }

    int num;
    int count = 0;
    int sum = 0;
    while (fscanf_s(file, "%d", &num) == 1)
    {
        count++;
        sum += num;
    }

    printf("정수들의 개수: %d\n", count);
    printf("정수들의 합계: %d\n", sum);
    printf("정수들의 평균: %f\n", (float)sum / count);

    fclose(file);
}
