#include <stdio.h>
#define QUIT '#'

int main(void)
{
    int ch;
    int i = 0;
    printf("请输入字符串(# to quit):\n");
    while ((ch=getchar())!=QUIT)
    {
        if (i++ % 8 == 0)
        {
            putchar('\n');
        }
        if (ch == '\n')
        {
            printf("'\\n'-%3d ", ch);
        }
        else if (ch == '\t')
        {
            printf("'\\t'-%3d ", ch);
        }
        else
        {
            printf("'%c'-%3d ", ch, ch);
        }
    }
    printf("Done.\n");
    return 0;
}
