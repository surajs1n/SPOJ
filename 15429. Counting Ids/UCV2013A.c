#include<stdio.h>
#define MOD 1000000007
int main()
{
    unsigned int n,l;

    while(1)
    {
        scanf("%u%u",&n,&l);

        if(n == 0 && l == 0)
            break;

        long long pro = 1,sum =  0;

        while(l--)
        {
            pro = (pro * n) % MOD;

            sum = (sum + pro) % MOD;

            if(pro >= MOD)
                pro %= MOD;
        }

        printf("%lld\n",sum);
    }

    return 0;
}
