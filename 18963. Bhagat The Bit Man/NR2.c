#include<stdio.h>

long long arr[1000005],sum = 0,result=0;

int main()
{
    int i,n;

    scanf("%i",&n);

    i=-1;
    while(++i < n)
    {
        scanf("%lld",arr+i);
        sum |= arr[i];
    }

    i = -1;
    while(++i < n)
    {
        result |= (~arr[i] & (sum - arr[i]));
    }

    printf("%lld\n",result);

    return 0;
}
