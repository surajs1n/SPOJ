#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        long long sum=0,score=1,diff=1;        int n;

        scanf("%d",&n);

        while(n--)
        {
            sum = score + 2*diff;
            score = sum;
            diff = score - diff;
        }

        printf("%llu\n",sum);
    }
    return 0;
}
