#include <stdio.h>
#include <stdlib.h>

#define MAX_FILE_NAME_LENGTH 64
#define BUFFER_SIZE 256

int main(void)
{
    char fileName[MAX_FILE_NAME_LENGTH];
    char buffer[BUFFER_SIZE];
    FILE* file;

    printf("파일 이름을 입력하시오: ");
    scanf_s("%s", fileName, MAX_FILE_NAME_LENGTH);
    fileName[MAX_FILE_NAME_LENGTH - 1] = '\0';

    if (fopen_s(&file, fileName, "r") != 0)
    {
        printf("fopen_s() error!");
        exit(1);
    }

    int lineNumber = 1;
    while (fgets(buffer, BUFFER_SIZE, file) != NULL)
    {
        printf("%d %s", lineNumber, buffer);
        lineNumber++;
    }

    fclose(file);
}
