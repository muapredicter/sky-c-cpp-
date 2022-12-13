#include <stdio.h>
int main()
{
    int day;
    do
    {
        printf("请输入天数：");
        scanf("%d", &day);
        if (day <= 0)
        {
            printf("错误");
            break;
        }
        printf("%d days are %d weeks, %d days\n", day, day / 7, day % 7);
    } while (1);
    return 0;
}