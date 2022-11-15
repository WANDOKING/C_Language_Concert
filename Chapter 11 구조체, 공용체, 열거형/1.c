#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct
{
    int hour;
    int minute;
    int second;
} myTime_t;

int main(void)
{
    myTime_t time1;
    myTime_t time2;

    printf("시작시간(시, 분, 초): ");
    scanf("%d %d %d", &time1.hour, &time1.minute, &time1.second);

    printf("시작시간(시, 분, 초): ");
    scanf("%d %d %d", &time2.hour, &time2.minute, &time2.second);

    int time1Seconds = time1.second + time1.minute * 60 + time1.hour * 60 * 60;
    int time2Seconds = time2.second + time2.minute * 60 + time2.hour * 60 * 60;

    int timeDifference = abs(time1Seconds - time2Seconds);

    myTime_t result;
    result.second = timeDifference % 60;
    result.minute = (timeDifference / 60) % 60;
    result.hour = (timeDifference / 60) / 60;

    printf("소요시간 %d:%d:%d\n", result.hour, result.minute, result.minute);
}
