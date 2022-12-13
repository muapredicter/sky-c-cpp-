#include <stdio.h>

void test(double *a, double *b, double *c)
{
    double tp;

    if (*a > *b)
    {
        tp = *a;
        *a = *b;
        *b = tp;
    }
    if (*a > *c)
    {
        tp = *a;
        *a = *c;
        *c = tp;
    }
    if (*b > *c)
    {
        tp = *b;
        *b = *c;
        *c = tp;
    }
    return;
}

int main(void)
{
    double x, y, z;
    printf("输入三个数字(q to quit): ");
    while (scanf("%lf %lf %lf", &x, &y, &z) == 3)
    {
        test(&x,&y,&z);
        printf("MIN=%lf\n",x);
        printf("MID=%lf\n",y);
        printf("MAX=%lf\n",z);
        printf("继续输入三个数字(q to quit): ");
    }
    printf("Done.\n");
    return 0;
}

