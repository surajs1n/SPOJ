#include<stdio.h>

int main()
{
    int n;

    while(1)
    {
        scanf("%i",&n);

        if(n == 0)
            exit(0);

        int i=7,sum = 5;

        while(--n)
        {
            sum += i;
            i += 3;
        }

        printf("%i\n",sum);

    }

    return 0;
}
