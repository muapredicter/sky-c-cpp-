#include <stdio.h>
int  Fibonacci(int n)
{
    if (n==1)
    return 1;
    if (n==2)
    return 1;
    int a=1,b=1;
    int c;
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=Fibonacci(n);
    printf("第%d个斐波那契数为%d",n,ans);
    return 0;
}