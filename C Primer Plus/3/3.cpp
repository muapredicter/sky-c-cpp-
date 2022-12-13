#include <stdio.h>

int main()
{
    double age, seconds;
    printf("请输入年龄:");
    scanf("%lf", &age);
    seconds = age * 3.156e7;
    printf(" %g 年是 %g 秒\n", age, seconds);
    return 0;
}
