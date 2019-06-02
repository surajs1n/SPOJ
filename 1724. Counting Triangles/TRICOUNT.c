#include<stdio.h>

int main()
{
    int t,i;          unsigned long long *arr;

    arr = (unsigned long long *)malloc(sizeof(long long)*1000000);

    arr[0]=1;   arr[1]=5;   arr[2]=13;

    scanf("%i",&t);

    for(i=4;    i<=1000000;   i++)
        {
            arr[i-1] = 3*(arr[i-2]-arr[i-3]) + arr[i-4];

            if(i%2==0)
                arr[i-1] += 2;
            else
                arr[i-1] += 1;
        }

    while(t--)
    {
        int n;

        scanf("%i",&n);


        printf("%lld\n",arr[n-1]);


    }

    free(arr);

    return 0;
}
