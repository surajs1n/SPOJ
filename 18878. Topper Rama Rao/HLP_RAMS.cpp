#include<stdio.h>

int main()
{
    int t,count,i;    long long num,odd,temp;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%lld",&num);

        count=i=0;
        temp = num;

        while(num)
        {
            count += num&1;
            num >>= 1;
        }

        odd = 1;

        while(++i<=count)
            odd *= 2;

        printf("%lld %lld\n",temp+1 - odd,odd);
    }

    return 0;
}
