#include <stdio.h>

int main()
{
    int num1=0;
    int num2=0;
    int ch;
    printf("请输入字符:\n");
    while ((ch=getchar())!=EOF)
    {
        if ((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
        {
            num1++;
        }
        else
        {
            num2++;
        }
    }
    printf("字母数为:%d\n",num1);
    printf("其他字符数为:%d\n",num2);
    return 0;
}
