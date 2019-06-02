#include<stdio.h>

int main()
{
    long long arr[30],pro;    int i,j,n,t,k;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%i",&n,&k);

        n++;

        i = -1;
        while(++i < n)
            scanf("%lld",arr+i);

        pro = i = 1;
        int count = 0;
        while(++i < n)
        {
            j = 0;
            ++count;
            while(++j <= n - i)
            {
                arr[j] += ( count * arr[j-1] );
            }
        }

        i = (n-1) - k;
        j = 0;
        while(++j < k)
            pro *= j;

        printf("%lld\n",arr[i]*pro);
    }

    return 0;
}
