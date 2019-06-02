#include<stdio.h>

int main()
{
    int arr[300000],i,res=0,c=0,n;

    scanf("%i",&n);

    for(i=0;    i<n;    i++)
        scanf("%i",arr+i);

    i--;    res =n;

    for(;   i>=0;   i--)
    {
        if(arr[i] == res)
        {
            res--;
            c++;
        }
    }

    if(c == 1 )
    {
        if(arr[0] == n)
            printf("%i\n",n-1);

        else
            printf("%i\n",n);
    }

    else
        printf("%i\n",n-c);

    return 0;
}
