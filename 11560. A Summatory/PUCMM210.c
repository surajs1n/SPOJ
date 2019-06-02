#include<stdio.h>

int arr[1000001];

int main()
{
    int t,i,j,n;    long long  hold;

    arr[1] = 1;

    for(i=2;    i<1000001;  i++)
    {
        hold = (((long long) (i) * (i+1))/2) % 1000000003;
        arr[i] = (hold * hold + arr[i-1]) % 1000000003;
    }

    scanf("%i",&n);

    while(n--)
    {
        scanf("%i",&i);
        printf("%i\n",arr[i]);
    }

    return 0;
}
