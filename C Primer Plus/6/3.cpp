#include <stdio.h>

int main()
{
    int i = 1;
    int friends = 5;
    while (friends <= 150)
    {
        printf("在%d周Rabnud有%d个朋友\n", i,friends);
        friends = 2 * (friends - i++);
    }
    printf("在%d周Rabnub的朋友数量超过了邓巴数\n", i);
    return 0;
}
