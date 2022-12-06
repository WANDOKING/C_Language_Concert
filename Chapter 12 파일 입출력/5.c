#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILE_NAME_LENGTH 64
#define BUFFER_SIZE 256

int main(void)
{
    char fileName1[MAX_FILE_NAME_LENGTH];
    char fileName2[MAX_FILE_NAME_LENGTH];

    printf("첫번째 파일 이름: ");
    scanf_s("%s", fileName1, MAX_FILE_NAME_LENGTH);
    fileName1[MAX_FILE_NAME_LENGTH - 1] = '\0';

    printf("두번째 파일 이름: ");
    scanf_s("%s", fileName2, MAX_FILE_NAME_LENGTH);
    fileName2[MAX_FILE_NAME_LENGTH - 1] = '\0';

    char buffer1[BUFFER_SIZE];
    char buffer2[BUFFER_SIZE];

    FILE* file1;
    FILE* file2;

    if (fopen_s(&file1, fileName1, "rb") != 0)
    {
        printf("fopen_s() error!");
        exit(1);
    }

    if (fopen_s(&file2, fileName2, "rb") != 0)
    {
        printf("fopen_s() error!");
        exit(1);
    }

    fseek(file1, 0, SEEK_END);
    size_t size1 = ftell(file1);
    rewind(file1);

    fread(buffer1, size1, 1, file1);
    buffer1[size1] = '\0';

    fseek(file2, 0, SEEK_END);
    size_t size2 = ftell(file2);
    rewind(file2);

    fread(buffer2, size2, 1, file2);
    buffer2[size2] = '\0';

    if (strcmp(buffer1, buffer2) == 0)
    {
        printf("두 파일은 서로 같습니다.\n");
    }
    else
    {
        printf("두 파일은 서로 다릅니다.\n");
    }

    fclose(file1);
    fclose(file2);
}
