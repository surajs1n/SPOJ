#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        long double b=1,c,sum=0;
        int n,i;

        scanf("%i",&n);

        for(i=1;    i<=n;   i++)
        {
            c = (b * (b+2*i));
            b= b+2*i;
            sum += i/c;
        }

        printf("%0.5Lf\n",sum);
    }
    return 0;
}
