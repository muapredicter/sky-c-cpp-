#include <stdio.h>
#include <ctype.h>

void attain_pos(void);
int position(int ch);

int main(void)
{
    attain_pos();

    return 0;
}

void attain_pos(void)
{
    int ch;
    int figure;
    printf("输入一个字符(EOF to quit):\n");
    while ((ch = getchar()) != EOF)
    {
        figure = position(ch);
        if (figure)
        {
            printf("%c在字母表的第%d位\n", ch, figure);
        }
        else
        {
            printf("%c不是字母\n", ch); 
        }
        while (getchar() != '\n')
            continue;
        printf("继续输入(EOF to quit): ");
    }
    printf("Done.\n");
}

int position(int ch)
{
    if (isupper(ch))
    {
        return (ch - 'A' + 1);
    }
    else if (islower(ch))
    {
        return (ch - 'a' + 1);
    }
    return 0;
}
