#include <stdio.h>
#define STOP '#'

int main()
{
    int ch;
    int n = 0;
    int flag = 0;
    printf("Enter some characters('#' to quit):\n");
    while ((ch = getchar()) != STOP)
    {
        switch (ch)
        {
        case 'e':
        {
            flag = 1;
            break;
        }
        case 'i':
        {
            if (flag == 1)
            {
                n++;
            }
            flag = 0;
            break;
        }
        default:
        {
            flag = 0;
        }
        }
    }
    printf("ei出现的的次数为:%d\n", n);

    return 0;
}
