#include<stdio.h>
#include<math.h>
int main()
{
    int t,k,total,index,sum;      unsigned long long a,b,c;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%llu%llu%i",&a,&b,&k);

        total = 0;

        while( a <= b )
        {
           c = a++;

           index = sum = 0;

           while(c)
           {
               ( ++index & 1 ) ? (sum -= (c%2)) : (sum += (c%2));

                c >>= 1;
           }

           if(-1*sum == k || sum == k )
                total++;

        }

        printf("%i\n",total);

    }

    return 0;
}
