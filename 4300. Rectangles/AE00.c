#include<stdio.h>

int main()
{
    int num,i=1;  long long sum=0;

    scanf("%i",&num);

    while(num/i>=i)
    {
        sum += num/i - i +1;  i++;
    }

    printf("%lld\n",sum);
    return 0;
}
