#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
    float real;
    float imaginary;
} complex_t;

int main(void)
{
    complex_t complex1;
    complex_t complex2;

    printf("첫번째 복소수를 입력하시오(a, b):");
    scanf("%f %f", &complex1.real, &complex1.imaginary);

    printf("두번째 복소수를 입력하시오(a, b):");
    scanf("%f %f", &complex2.real, &complex2.imaginary);

    printf("%.1f + %.1fi\n", complex1.real + complex2.real, complex1.imaginary + complex2.imaginary);
}
