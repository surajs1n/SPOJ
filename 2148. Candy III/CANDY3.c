#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        long long n,i,a,b=0;

        scanf("%lld",&n);

        for(i=1;    i<=n;    i++)
        {
            scanf("%lld",&a);
            b=b+a;
            if(b>=n)
            {
                b = b%n;
            }
        }

        if(b==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
