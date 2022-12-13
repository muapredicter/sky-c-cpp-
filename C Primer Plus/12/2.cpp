#include <stdio.h>
#include <stdlib.h>
#define N 10
#define LEN 1000

int main()
{
    int i, temp, a[N + 1];
    unsigned int seeds;
    for (seeds = 1; seeds <= N; seeds++)
    {
        printf("次数 = %d:\n", seeds);
        srand(seeds);
        for (i = 0; i < N + 1; i++)
        {
            a[i] = 0;
        }
        for (i = 0; i < LEN; i++)
        {
            temp = rand() % 10 + 1;
            a[temp]++;
        }
        for (i = 1; i < N + 1; i++)
        {
            printf("%-3d 出现 %d 次.\n", i, a[i]);
        }
        printf("所有随机数的个数: %d\n\n", LEN);
    }
    return 0;
}