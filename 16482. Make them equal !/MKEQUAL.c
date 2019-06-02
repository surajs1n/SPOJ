#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int n,i,*arr,sum=0;

        scanf("%i",&n);

        arr = (int *)malloc(sizeof(int)*n);

        for(i=0;    i<n;    i++)
        {
            scanf("%i",arr+i);

            sum += arr[i];
        }

        free(arr);

        if(sum%n != 0)
            n--;

        printf("%i\n",n);
    }

    return 0;
}
