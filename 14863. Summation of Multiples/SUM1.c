#include<stdio.h>

int main()
{
    int t;

    scanf("%i",&t);

    while(t--)
    {
        long long num,n1,n2,i15;      unsigned long long sum_3,sum_5,sum_15;

        scanf("%lld",&num);

        n1 = num/3;

        n2 = num/5;

        if(num%3==0)
            n1--;
        if(num%5==0)
            n2--;

        i15= n2/3;

        sum_3 = (unsigned long long)(3*n1*(n1+1))/2;

        sum_5 = (unsigned long long)(5*n2*(n2+1))/2;

        sum_15 = (unsigned long long)(15*i15*(i15+1))/2;

        printf("%llu\n",(sum_3+sum_5-sum_15));
    }
    return 0;
}
