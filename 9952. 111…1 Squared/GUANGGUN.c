#include<stdio.h>

int main()
{
    long long num;

    while(scanf("%lld",&num)!=EOF)
    {
        unsigned long long times=0,n=0;

        times = num/9;

        n = num%9;

        printf("%llu\n",times*81+n*n);
    }
    return 0;
}
