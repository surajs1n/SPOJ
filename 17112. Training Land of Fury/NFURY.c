#include<stdio.h>

int main()
{
    int arr[1001]={0},small,i,j,k,n;

    for(i=2;    i<=1000;    i++)
        arr[i] = 100000;

    for(i=1;    i<32;   i++)
        arr[i*i]=1;

    for(i=2;    i<=1000;    i++)
    {
        j = i/2;
        for(k=1;    k<=j;   k++)
                if(arr[i] > arr[k]+arr[i-k])
                    arr[i] = arr[i-k] + arr[k];
    }

    scanf("%i",&n);

    while(n--)
    {
        scanf("%i",&i);

        printf("%i\n",arr[i]);
    }
    return 0;
}
