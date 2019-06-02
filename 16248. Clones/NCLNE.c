#include<stdio.h>
#include<stdlib.h>

int arr[1000000];
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int n,i,flag = 1;         unsigned long long sum = 1;

        scanf("%i",&n);

        for(i=0;    i<n;    i++)
        {
            scanf("%i",arr+i);

            if(arr[i] > sum || (i==n-1 && arr[i] - sum != 0))
                flag = 0;

            else
            {
                sum -= arr[i];
                sum *= 2;
            }
        }

        if(flag == 0)
            printf("No\n");

        else
            printf("Yes\n");

    }
    return 0;
}

