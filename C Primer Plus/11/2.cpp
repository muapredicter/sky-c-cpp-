#include <stdio.h>
#include <string.h>
#define LEN 10
#define SPACE ' '

char *s_gets(char *st, int n);
void cancel(char *str);

int main()
{
    char source[LEN];

    printf("输入一个字符串(EOF or enter to quit):\n");
    while (s_gets(source, LEN) != NULL && source[0] != '\0')
    {
        printf("原: %s\n", source);
        cancel(source);
        printf("删: %s\n", source);
        printf("继续输入(EOF or enter to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}

void cancel(char *str)
{
    char *pt = str;

    while (*str)
    {
        if (*str != SPACE)
        {
            *pt++ = *str++;
        }
        else
        {
            str++;
        }
    }
    *pt = '\0';
    return;
}