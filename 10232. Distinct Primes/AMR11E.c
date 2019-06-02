#include<stdio.h>

int main()
{
    int num[500]={0},prime[100],lucky[1000],i,j,k,n,lucky_index = -1,prime_index=0,flag=0;

    prime[0] = 2;

    for(i = 3;    i <= 23;     i += 2)
    {
        if(!num[i])
        {
            prime[++prime_index] = i;
            for(j = i*i;    j<=500;    j  += (2*i))
                num[j] = 1;
        }
    }

    for(;      i <= 500;      i += 2 )
        if(!num[i])
            prime[++prime_index] = i;

    for(i = 30;   lucky_index <= 1000;  i++)
    {
        flag = 0;

        for(j=0;    j <= prime_index;     j++)
        {
            if(i%prime[j]==0)
                flag++;
        }

        if(flag >= 3)
            lucky[++lucky_index] = i;
    }

    scanf("%i",&i);

    while(i--)
    {
        scanf("%i",&j);
        printf("%i\n",lucky[j-1]);
    }

    return 0;
}
