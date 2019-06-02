#include<stdio.h>

int main()
{
    int i,j,n,u,l,r,val,q,t;

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i%i",&n,&u);

        int arr[10002]={0};

        while(u--)
        {
            scanf("%i%i%i",&l,&r,&val);

            arr[l] += val;
            arr[r+1] -= val;
        }

        for(i=1;    i<n;    i++)
            arr[i] += arr[i-1];

        scanf("%i",&q);

        while(q--)
        {
            scanf("%i",&i);
            printf("%i\n",arr[i]);
        }

    }

    return 0;
}
