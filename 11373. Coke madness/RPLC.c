#include<stdio.h>

int main()
{
    int t,j;
    scanf("%i",&t);

    for(j=1;    j<=t;   j++)
    {
        int n,i,*arr;
        long long x=1,y=1;

        scanf("%i",&n);

        arr = (int *)malloc(sizeof(n)*n);

        for(i=0;    i<n;    i++)
        {
            scanf("%i",arr+i);

            if(y+arr[i]>0)
                y += arr[i];

            else
            {
                x = (x+1) - 1*(y+arr[i]);
                y=1;
            }
        }
        printf("Scenario #%i: %lld\n",j,x);
        free(arr);
    }
    return 0;
}
