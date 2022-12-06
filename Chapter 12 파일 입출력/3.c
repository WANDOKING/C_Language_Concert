#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void)
{
    const char* FILE_NAME = "3.txt";
    char buffer[BUFFER_SIZE];
    FILE* file;

    if (fopen_s(&file, FILE_NAME, "rb") != 0)
    {
        printf("fopen_s() error!");
        exit(1);
    }

    fseek(file, 0, SEEK_END);
    size_t size = ftell(file);
    rewind(file);

    if (size >= BUFFER_SIZE)
    {
        printf("file is too big");
        exit(1);
    }

    fread(buffer, size, 1, file);
    buffer[size] = '\0';

    int count = 1;
    for (int i = 0; i < size; ++i)
    {
        if (buffer[i] == '\n')
        {
            count++;
        }
    }

    printf("%s\n\n", buffer);
    printf("라인의 개수=%d\n", count);

    fclose(file);
}
