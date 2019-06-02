#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int j,num,i;      long long sum=1,arr[10]={1};

        scanf("%i%i",&i,&num);

        while(num--)
        {
           for(j=1;     j<10;      j++)
                arr[j] += arr[j-1];
        }

        for(j=1;    j<10;   j++)
            sum += arr[j];

        printf("%i %lld\n",i,sum);

    }

    return 0;
}
