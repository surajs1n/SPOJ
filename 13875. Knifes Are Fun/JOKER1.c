#include<stdio.h>

int main()
{
    int i,j,flag,t,arr[100],n;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);

        i = -1;
        while(++i < n)
            scanf("%i",arr+i);

        i = -1;
        while(++i < n-1)
        {
             j = i;
             while(++j < n)
                if(arr[j] < arr[i])
                {
                    arr[i] = arr[i] + arr[j] - ( arr[j] = arr[i] );
                }
        }

        long long pro = arr[0];

        flag = i = 0;

        while( ++i < n )
        {
            if(arr[i] - i < 1)
            {
                flag = 1;
                break;
            }

            else
                pro = ( pro * ( arr[i] - i) ) % 1000000007;
        }

        if(flag)
            printf("0\n");
        else
            printf("%lld\n",pro);
    }

    printf("KILL BATMAN\n");

    return 0;
}
