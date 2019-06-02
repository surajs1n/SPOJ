#include<stdio.h>
#include<stdlib.h>

int hold[1000002]={0},num[1000002]={0},n,k,i,j;

int main()
{
    scanf("%i%i",&n,&k);

    while(k--)
    {
        scanf("%i%i",&i,&j);

        num[i]++;
        num[j+1]--;
    }

    hold[num[0]]++;

    for(i=2;    i<=n;    i++)
    {
        num[i] += num[i-1];
        hold[num[i]]++;
    }

    n = (n+1)/2;

    for(i=0;    i<=1000000;    i++)
    {
        if(n <= hold[i])
            break;

        n -= hold[i];
    }
    printf("%i\n",i);

    return 0;
}
