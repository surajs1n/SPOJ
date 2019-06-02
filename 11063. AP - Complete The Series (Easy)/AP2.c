#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        long long num_3, num_l3, sum, a, n, d,  i;

        scanf("%lld%lld%lld",&num_3,&num_l3,&sum);

        n = (2*sum)/(num_3+num_l3);

        d = (num_l3 - num_3)/(n-5);

        a = num_3 - 2*d;

        printf("%lld\n",n);

        for(i=0;    i<n;   i++)
            printf("%lld ",a+i*d);
        printf("\n");
    }
    return 0;
}
