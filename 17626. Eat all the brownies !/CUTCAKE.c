#include<stdio.h>

int main()
{
    int t;       long long num,sqr=1;

    scanf("%i",&t);

    while(t--)
    {

        scanf("%lld",&num);

        num--;

        if(!num)
        {
            printf("0\n");
            continue;
        }

        sqr = sqrt(num);

        for(;  ;   sqr++)
            if(num <= (sqr*(sqr+1))/2 )
                break;


       printf("%i\n",sqr);
    }

    return 0;
}
