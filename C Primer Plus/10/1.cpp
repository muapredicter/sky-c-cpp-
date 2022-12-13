#include <stdio.h>
#define SIZE 5

void Print(double arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%lf\n",arr[i]);
    }
}

double TEST(double arr[],int n)
{
    double max=arr[0];
    double min=arr[0];
    for (int i=1;i<n;i++)
    {
        max = max < arr[i] ? arr[i] : max;
        min = min > arr[i] ? arr[i] : min;
    }
    return max-min;
}


int main()
{
    double arr[SIZE]={5.0,4.0,3.0,2.0,1.0};
    Print(arr,SIZE);
    double ans=TEST(arr,SIZE);
    printf("%lf\n",ans);
    return 0;
}