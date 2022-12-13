#include <stdio.h>
#define X 3
#define Y 5

int main()
{
    double arr[X][Y]={0.0};
    double brr[X]={0};
    for (int i=0;i<X;i++)
    {
        for (int j=0;i<Y;j++)
        {
            scanf("%lf",&arr[i][j]);
        }
    }
    for (int i=0;i<X;i++)
    {
        double sum =0;
        for (int j=0;j<Y;j++)
        {
            sum+=arr[i][j];
        }
        brr[i]=sum/Y;
    }
    for (int i=0;i<X;i++)
    {
        double sum=0;
        double tmp;
        for (int j=0;i<Y;j++)
        {
            sum+=arr[i][j];
        }
        tmp+=sum;
    }
    double max=arr[0][0];
    for (int i=0;i<X;i++)
    {
        for (int j=0;j<Y;j++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    for(int i=0;i<X;i++)
    {
        for (int j=0;j<Y;j++)
        {
            printf("%lf",arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<X;i++)
    {
        printf("%lf",brr[i]);
    }
    printf("MAX=%lf",max);
}