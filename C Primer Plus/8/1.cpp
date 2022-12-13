#include <stdio.h>

int main(void)
{
    int ch;
    int i = 0;
    printf("请输入字符:\n");
    while ((ch = getchar()) != EOF)
    {
        if (i++ == 10)
        {
            printf("\n");
            i = 1;
        }
        if (ch >= 32) 
        {
            printf(" \'%c\' - %3d ", ch, ch);
        }
        else if (ch == '\n')
        {
            printf(" \\n - \\n\n ");
            i = 0;
        }
        else if (ch == '\t')
        {
            printf(" \\t - \\t ");
        }
        else
        {
            printf(" \'%c\' - ^%c ", ch, ch + 64);
        }
    }
    printf("Done.");
    return 0;
}
