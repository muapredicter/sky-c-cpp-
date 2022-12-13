#include <stdio.h>

int main(void)
{
    double quart, molecules;
    printf("请输入夸脱数:");
    scanf("%lf", &quart);
    molecules = quart * 950 / 3.0e-23;
    printf(" %g 夸脱水包含 %e 个水分子\n", quart, molecules);
    return 0;
}
