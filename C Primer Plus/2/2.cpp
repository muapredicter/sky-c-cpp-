#include <stdio.h>

void TWO()
{
    printf("two\n");
}

void one_three()
{
    printf("one\n");
    TWO();
    printf("three\n");
}

int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!");
    return 0;
}