#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        int term,inc=1; long long i=1;

        scanf("%i",&term);

        for(i=1;    ;)
        {
            if(term <= i)
               break;

            inc++;

            i += (inc);
        }


        if(inc%2 == 0)
            printf("TERM %i IS %lld/%lld\n",term,inc-i+term,i-term+1);

        else
            printf("TERM %i IS %lld/%lld\n",term,i-term+1,inc-i+term);
    }

    return 0;
}

