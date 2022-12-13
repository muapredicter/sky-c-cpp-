#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int ch, lower=0, upper=0, digit=0;
    int punct=0, words=0;
    bool inword = false;
    printf("输入字符：(EOF to quit):\n");
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            lower++;
        }
        else if (isupper(ch))
        {
            upper++;
        }
        else if (isdigit(ch))
        {
            digit++;
        }
        else if (ispunct(ch))
        {
            punct++;
        }
        if (!isspace(ch) && !inword)
        {
            inword = true;
            words++;
        }
        if (isspace(ch) && inword)
        {
            inword = false;
        }
    }
    printf("Words: %d\n", words);
    printf("Lower: %d\n", lower);
    printf("Upper: %d\n", upper);
    printf("Digit: %d\n", digit);
    printf("Punct: %d\n", punct);
    return 0;
}
