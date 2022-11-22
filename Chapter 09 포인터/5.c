#include <stdio.h>
#define HEIGHT 10
#define WIDTH 10

void brighten_image(char* p, int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i] = p[i] - 1 >= 0 ? p[i] - 1 : 0;
    }
}

void PrintImage(char* p, int n)
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            printf("%d ", p[i * HEIGHT + j]);
        }
        putchar('\n');
    }
    
}

int main(void)
{
    char image[HEIGHT * WIDTH] = {
        0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
        0, 0, 0, 9, 9, 0, 0, 0, 0, 0,
        0, 0, 9, 0, 9, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
        0, 0, 6, 6, 9, 7, 7, 0, 0, 0,
    };

    brighten_image(image, HEIGHT * WIDTH);
    PrintImage(image, HEIGHT * WIDTH);
}
