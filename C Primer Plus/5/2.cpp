#include <stdio.h>

void Temperatures(double temp)
{
    const double a = 32.0;
    const double b = 273.16;
    printf("华氏温度为:%.2lf\n",temp);
    printf("摄氏温度为:%.2lf\n",5.0/9.0*(temp-a));
    printf("开氏温度为:%.2lf\n",temp+b);
}

int main()
{
    double temp;
    printf("请输入(q to quit):");
    while (scanf("%lf", &temp) == 1)
    {
        Temperatures(temp);
        printf("请请入(q to quit):");
    }
}