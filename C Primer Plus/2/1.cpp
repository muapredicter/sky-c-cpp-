#include <stdio.h>

void SMILE()
{
    printf("Smile!");
}

int main()
{
    for (int i=1;i<=3;i++)
    {
        for (int j=i;j<=3;j++)
        {
            SMILE();
        }
        printf("\n");
    }
    return 0;
}