#include<stdio.h>

int arr[1000001];

int main()
{
    int i,j,t,n;

    long long pro = 2;

    arr[2] = 2;
    i = 2;
    while(++i <= 1000000)
    {
        pro = ( arr[i] = (pro * (pro + 1)) % 1000000007 );
    }

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);
        printf("%i\n",arr[n]);
    }

    return 0;
}
