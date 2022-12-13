#include <stdio.h>

int main()
{
    double speed, size, time;
    printf("输入下载速度(Mb/s):");
    scanf("%lf", &speed);
    printf("输入文件大小(MB):");
    scanf("%lf", &size);
    time = size * 8 / speed;
    printf("\n");
    printf("At %.2lf megabits per secnod, ", speed);
    printf("a file of %.2lf megabytes ", size);
    printf("downloads in %.2lf seconds.\n", time);
    return 0;
}
