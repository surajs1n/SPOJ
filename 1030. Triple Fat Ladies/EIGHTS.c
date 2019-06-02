#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        long long k,i,j;

        scanf("%lld",&k);

        k--;

        if(k/4!=0)
            printf("%lld",(k/4));

        if(k%4==0)
            printf("192\n");
        else if(k%4==1)
            printf("442\n");
        else if(k%4==2)
            printf("692\n");
        else
            printf("942\n");
    }
    return 0;
}
