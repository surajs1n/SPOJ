#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define LIM 10000001

int main()
{
    long long *num,i,j,root=sqrt(LIM); int t,n;

    num =(long long *) malloc(LIM*sizeof(long long));

    num[1] = num[0] = 0; num[2] = 2;

    for(i=4;    i<LIM;  i+=2)
         num[i] = 2;

    for(i=3;    i<=root;    i++)
    {
        if(num[i] == 0)
        {
            num[i] = num[i-1]+i;

            for(j=i*i;  j<LIM;  j += (2*i))
                if(!num[j])
                    num[j] = i;
        }

        else
            num[i] += num[i-1];
    }

    for(;i<LIM; i++)
    {
        if(!num[i])
            num[i] = num[i-1] + i;
        else
            num[i] += num[i-1];
    }

    scanf("%i",&t);

    while(t--)
    {
        scanf("%i",&n);

        printf("%lld\n",num[n]);
    }

    free(num);
    return 0;
}
