#include<stdio.h>

int main()
{
    while(1)
    {
        int sum,i;

        scanf("%i",&i);

        if(i==0)
            break;

        sum = (i*(i+1)*(2*i+1))/6;

        printf("%i\n",sum);

    }
    return 0;
}
