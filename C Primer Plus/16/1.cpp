#include <stdio.h>
#include <math.h>
#define PI 3.1415926

typedef struct
{
    double length;
    double angle;
} polar;

typedef struct
{
    double x;
    double y;
} rect;

rect test(const polar *temp);

int main()
{
    polar input;
    rect answer;
    printf("输入一个极坐标(q tu quit): ");
    while (scanf("%lf %lf", &input.length, &input.angle) == 2)
    {
        answer = test(&input);
        printf("极坐标: %g %g\n", input.length, input.angle);
        printf("直角坐标: %g %g\n", answer.x, answer.y);
        printf("继续输入一个极坐标(q tu quit): ");
    }
    puts("Done.");

    return 0;
}

rect test(const polar *temp)
{
    rect res;
    static const double rad = PI / 180.0;
    double ang = rad * temp->angle;

    res.x = temp->length * sin(ang);
    res.y = temp->length * cos(ang);

    return res;
}
