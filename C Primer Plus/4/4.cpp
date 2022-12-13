#include <stdio.h>

int main()
{
    float f = 1.0 / 3.0;
    double lf = 1.0 / 3.0;
    printf("保留6位有效位数:%.6f\n", f);
    printf("保留6位有效位数:%.6lf\n", lf);
    printf("保留12位有效位数:%.12f\n", f);
    printf("保留12位有效位数:%.12lf\n", lf);
    printf("保留16位有效位数:%.16f\n", f);
    printf("保留16位有效位数:%.16lf\n", lf);
    return 0;
}