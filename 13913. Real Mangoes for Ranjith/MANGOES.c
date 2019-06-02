#include<stdio.h>

int main()
{
    int t,n;  long long num;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);

        if(n%2 == 0)
        {
            num = (n-1)/2;
            num *= num;
            printf("%lld\n",num%n);
        }

        else
        {
            num = n/2;
            num *= num;
            printf("%lld\n",num%n);
        }
    }
    return 0;
}
