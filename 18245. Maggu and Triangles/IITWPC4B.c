#include<stdio.h>
#include<math.h>

int main()
{
    int n;  long long i,temp,sum;

    scanf("%i",&n);

    while(n--)
    {
        scanf("%lld",&temp);

        if(temp&1)
           temp += 3;

        temp *= temp;

        sum = temp/48;

        if(temp%48 >= 24)
           sum++;

        printf("%lld\n",sum);
    }
    return 0;
}
