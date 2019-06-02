#include<stdio.h>

int arr[2000001]={0};

int main()
{
    int i,j,n,k,index,a;

    for(i=1;    i<=1000;    i++)
    {
       for(j=i+1;   j<=1000;    j++)
       {
                arr[i*i+j*j] = 1;
       }
    }

    for(i=5;    i<=1000000;    i++)
        if(arr[i])
            for(index = 2*i; index<=1000000;    index += i)
                arr[index] = 1;


    scanf("%i",&n);

    while(n--)
    {
        scanf("%i",&i);

        if(arr[i])
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
