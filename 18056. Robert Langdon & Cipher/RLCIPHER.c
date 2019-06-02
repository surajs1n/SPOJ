#include<stdio.h>

int arr[100000];

int main()
{
    int i,t,n,res[10]={-4,-3,-2,-4,-4,-3};

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);

        i=-1;
        while(++i < n)
            scanf("%i",arr+i);

        i=-1;

        while(++i < n)
        {
            if(-1 < arr[i] && arr[i] < 6)
                printf("%i ",res[arr[i]]);
            else if(arr[i] > 5)
                printf("-4 ");
            else
                printf("%i ",arr[i]);
        }

        printf("\n");
    }
    return 0;
}
