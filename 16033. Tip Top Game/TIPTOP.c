#include<stdio.h>
#include<math.h>

int main()
{
    int t,i=0;    long long n,j;

    scanf("%i",&t);

    while(++i <= t)
    {
        scanf("%lld",&n);

        j = sqrt(n);

        if(j*j == n)
            printf("Case %i: Yes\n",i);
        else
            printf("Case %i: No\n",i);
    }
    return 0;
}
