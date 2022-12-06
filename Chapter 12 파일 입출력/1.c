#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void)
{
    const char* FILE_NAME = "employee.txt";
    char buffer[BUFFER_SIZE];
    FILE* file;

    if (fopen_s(&file, FILE_NAME, "w") != 0)
    {
        printf("fopen_s() error!");
        exit(1);
    }

    printf("직원 이름: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    fputs(buffer, file);

    printf("나이: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    fputs(buffer, file);

    printf("월급: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    fputs(buffer, file);

    fclose(file);
}
