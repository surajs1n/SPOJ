#include<stdio.h>

int main()
{
    int t,arr[100000],i,flag,n;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n); flag = 1;

        for(i=0;    i<n;    i++)
        {
            scanf("%i",arr+i);
        }

        for(i=0;    i<n;    i++)
        {
            if(arr[i] > i)
            {
                flag = 0; break;
            }
        }

        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
