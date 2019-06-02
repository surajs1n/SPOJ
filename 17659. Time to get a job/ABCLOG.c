#include<stdio.h>

int main()
{
    int arr[64],i,j=0;    long long num;

    scanf("%lld",&num);

    if(num == -1)
        return 0;

    for(i=0;  num!=0;   i++)
    {
        arr[i] = num%2;
        num /= 2;
    }

    i--;
    for(;   i>=0;   i--)
        num += (arr[i]*pow(2,j++));

    printf("%lld\n",num);

    main();
}
