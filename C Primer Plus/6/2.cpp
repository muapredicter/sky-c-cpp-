#include <stdio.h>

int main()
{
    int upp, low, i;

    printf("请输入上下限: ");
    while ((scanf("%d %d", &low, &upp) == 2) && (upp > low))
    {
        int sum = 0;
        for (i = low; i <= upp; i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares ");
        printf("from %d to %d is %d\n", low * low, upp * upp, sum);
        printf("Enter next set of limits: ");
    }
    printf("Done\n");
    return 0;
}
