#include<stdio.h>

int main()
{
    int n,sum;    long long num,i,j;

    scanf("%i",&n);

    while(n--)
    {
        scanf("%lld",&num);

        for(j = num;    ;   j++)
        {
            i = j;  sum = 0;

            while(i)
            {
                sum += (i%10);
                i /= 10;
            }

            if(j%sum == 0)
                break;
        }

        printf("%lld\n",j);
    }

    return 0;
}
