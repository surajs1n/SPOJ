#include<stdio.h>

int main()
{
    while(1)
    {
        long long a,b,c,temp;

        scanf("%lld%lld%lld",&a,&b,&c);

        if(a==0  && b==0 && c==0)
            return 0;
        if(a>b && a>c)
        {
            if(a*a==b*b+c*c)
                printf("right\n");
            else
                printf("wrong\n");
        }
        else if(b>a && b>c)
        {
            if(b*b==a*a+c*c)
                printf("right\n");
            else
                printf("wrong\n");
        }
        else
        {
            if(c*c==a*a+b*b)
                printf("right\n");
            else
                printf("wrong\n");
        }
    }
}
