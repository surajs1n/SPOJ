#include<stdio.h>

int main()
{
    int arr[100],index=2,j,k=0,sum=7,side=0,n;

    scanf("%i",&n);

    arr[0]=1;   arr[1]=2;

    if(n == 0)
        sum = 1;
    else if(n == 1 )
        sum = 3;
    else if(n == 2)
        sum = 7;
    else
    {
        n -= 2;
        while(n--)
        {
            arr[index] = 2*arr[index-1] + (arr[index-2]);

            sum = sum + 2*arr[index];
            index++;
        }
    }
    printf("%i\n",sum);

    return 0;
}
