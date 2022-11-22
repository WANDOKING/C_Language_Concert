#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c, double* outXplus, double* outXminus)
{
    *outXplus = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    *outXminus = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

int main(void)
{
    int a;
    int b;
    int c;

    double xplus;
    double xminus;

    printf("input ax^2 + bx + c = 0 : ");
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);

    quadratic(a, b, c, &xplus, &xminus);
    printf("첫번째 실근: %f\n", xplus);
    printf("두번째 실근: %f\n", xminus);
}
