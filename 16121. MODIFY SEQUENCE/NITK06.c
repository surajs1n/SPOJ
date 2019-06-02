#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int *arr,n,i=0,flag=1;

        scanf("%i",&n);

        arr = (int *)malloc(sizeof(int)*n);

        for(i=0;    i<n;    i++)
            scanf("%i",arr+i);

        for(i=0;    i<n-1;  i++)
        {
            if(arr[i]<=arr[i+1])
            {
                arr[i+1] = arr[i+1] - arr[i];
                arr[i] = 0;
            }

            else
            {
                flag=0; break;
            }
        }

        if(flag==0 || arr[n-1]!=0)
            printf("NO\n");

        else
            printf("YES\n");

        free(arr);
    }
    return 0;
}
