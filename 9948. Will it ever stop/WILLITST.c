#include<stdio.h>

int main()
{
    long long n;        int i,flag=1;

    scanf("%lld",&n);

    while(n>1)
    {
        if(n%2==0)
            n /= 2;

        else
        {
            flag = 0;  break;
        }
    }

    if(flag == 0)
        printf("NIE\n");
    else
        printf("TAK\n");

    return 0;
}
