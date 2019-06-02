#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,num,prime[100100],arr[1300000]={0},prime_index=0;

    prime[0]=2;

    for(i=3;    i<1141;  i+=2)
    {
        if(!arr[i])
        {
            prime[++prime_index]=i;
            for(j=i*i;  j<1300000;  j = j+2*i)
                arr[j]=1;
        }
    }

    for(;   i<1300000;  i+=2)
        if(!arr[i])
            prime[++prime_index]=i;

  //  free(arr);

    while(scanf("%i",&num)!=EOF)
        printf("%i\n",prime[num-1]);

  //  free(prime);

    return 0;
}
