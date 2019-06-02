#include<stdio.h>

int arr[10000];

int main()
{
        int i,t,n;    long long net_sum,sum;

        scanf("%i",&t);

        while(t--)
        {
            scanf("%i",&n); net_sum = sum = 0;

            for(i=0;    i<n;    i++)
            {
                scanf("%i",arr+i);
                sum += arr[i];
            }

            for(i=0;    i<n;    i++)
            {
                net_sum += (sum - (n-i)*(long long)arr[i]);
                sum -= arr[i];
            }

            printf("%lld\n",net_sum);

        }
        return 0;
}
