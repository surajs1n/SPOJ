#include<stdio.h>

int arr[1000000];

int main()
{
    int n,k,j,i,maxi=-28,flag=1,index=-1;

    scanf("%i",&n);

    for(i=0;    i<n;    i++)
        scanf("%i",arr+i);

    scanf("%i",&k);

    for(i=0;     i<k;    i++)
        if(maxi <= arr[i])
        {
            maxi = arr[i];
            index = i;
        }

    printf("%i ",maxi);

    for(;   i<n;     i++)
    {
        if(arr[i] >= maxi)
        {
            maxi = arr[i];
            index = i;
        }

        else if(index <= i-k)
        {
            maxi = -1;
            for(j = i-k+1   ;j<=i;   j++)
            {
                if(maxi <= arr[j])
                {
                    maxi = arr[j];
                    index = j;
                }
            }
        }

        printf("%i ",maxi);
    }

    printf("\n");

    return 0;
}

