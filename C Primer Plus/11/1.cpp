#include <stdio.h>
#include <string.h>
#define LEN 20

char *s_gets(char *st, int n);
int is_within(char ch, const char *str);

int main()
{
    char ch, input[LEN];
    printf("输入字符串 (EOF to quit):\n");
    while (s_gets(input, LEN) != NULL)
    {
        printf("输入要查找的字符: ");
        ch = getchar();
        while (getchar() != '\n')
            continue;
        printf("字符串:\n");
        puts(input);
        if (!is_within(ch, input))
        {
            printf(" %c 不在该字符串中\n", ch);
        }
        else
        {
            printf(" %c 在该字符串中\n", ch);
        }
        printf("继续输入(EOF to quit):\n");
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

int is_within(char ch, const char *str)
{
    while (*str)
    {
        if (*str != ch)
        {
            ++str;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
