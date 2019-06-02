#include<stdio.h>

int main()
{
    int t,n,i,j;    long long num,sum1,sum2;

    scanf("%i",&t);

    while(t--)
    {
        int hold[1024] = {0};

        scanf("%i",&n);

        for(i=0;    i<n;    i++)
        {
            scanf("%lld",&num);

            int temp[10]={0,0,0,0,0,0,0,0,0,0},temp_sum = 0;

            while(num)
            {
                temp[num%10] = 1;
                num /= 10;
            }

            j = -1;
            while(++j < 10)
              temp_sum += (temp[j] * (1<<j));

            hold[temp_sum]++;
        }

        sum1 = sum2 = 0;

        for(i=0;    i<1024;     i++)
        {
            for(j=0;    j<1024;     j++)
            {
                if( (i != j) && (i & j) )
                {
                    sum1 += ( hold[i] * (long long)(hold[j]) );
                }

                else if(i == j)
                {
                    sum2 += ( hold[i] * (long long)(hold[i]-1) )/2;
                }
            }
        }

        printf("%lld\n",sum1/2 + sum2);
    }
    return 0;
}
