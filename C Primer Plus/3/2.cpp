#include <stdio.h>

int main()
{
    double number;
    printf("请输入:");
    scanf("%lf", &number);
    printf("小数形式打印: %f\n", number);
    printf("指数形式打印: %e\n", number);
    printf("十六进制打印: %a\n", number);
    return 0;
}
