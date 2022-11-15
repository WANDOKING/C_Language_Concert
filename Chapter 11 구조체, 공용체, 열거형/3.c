#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
    int id;
    const char* name;
    const char* phone;
    int age;
} employee_t;

int main(void)
{
    employee_t employees[10] = {
        { 0, "홍길동0", "010-1234-5678", 31 },
        { 1, "홍길동1", "010-2468-1357", 43 },
        { 2, "홍길동2", "010-1234-1234", 25 },
        { 3, "홍길동3", "010-5678-5622", 46 },
        { 4, "홍길동4", "010-1324-5633", 35 },
        { 5, "홍길동5", "010-1154-5664", 23 },
        { 6, "홍길동6", "010-1231-5623", 21 },
        { 7, "홍길동7", "010-7777-7777", 25 },
        { 8, "홍길동8", "010-8888-5998", 84 },
        { 9, "홍길동9", "010-1534-9998", 67 },
    };

    for (int i = 0; i < 10; i++)
    {
        if (employees[i].age >= 20 && employees[i].age <= 30)
        {
            printf("%s\n", employees[i].name);
        }
    }
}
